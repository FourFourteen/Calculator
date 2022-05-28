#include "MainWindow.h"
#include <vector>
#include <string>
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

//wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
//	EVT_BUTTON(1, OnButtonClicked)
//	EVT_BUTTON(2, OnButtonClicked)
//	EVT_BUTTON(3, OnButtonClicked)
//	EVT_BUTTON(4, OnButtonClicked)
//	EVT_BUTTON(5, OnButtonClicked)
//	EVT_BUTTON(6, OnButtonClicked)
//	EVT_BUTTON(7, OnButtonClicked)
//	EVT_BUTTON(8, OnButtonClicked)
//	EVT_BUTTON(9, OnButtonClicked)
//	EVT_BUTTON(10, OnButtonClicked)
//	EVT_BUTTON(11, OnButtonClicked)
//	EVT_BUTTON(12, OnButtonClicked)
//	EVT_BUTTON(13, OnButtonClicked)
//	EVT_BUTTON(14, OnButtonClicked)
//	EVT_BUTTON(15, OnButtonClicked)
//	EVT_BUTTON(16, OnButtonClicked)
//	EVT_BUTTON(17, OnButtonClicked)
//	EVT_BUTTON(18, OnButtonClicked)
//	EVT_BUTTON(19, OnButtonClicked)
//	EVT_BUTTON(20, OnButtonClicked)
//	EVT_BUTTON(21, OnButtonClicked)
//	EVT_BUTTON(22, OnButtonClicked)
//	EVT_BUTTON(23, OnButtonClicked)
//	EVT_BUTTON(24, OnButtonClicked)
//
//wxEND_EVENT_TABLE()
//push
CalculatorProcessor* CalculatorProcessor::instance;
MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(337, 480)) {

	topsizer = new wxBoxSizer(wxVERTICAL);
	btnsizer = new wxFlexGridSizer(6, 4, 0, 0);
	txt = new wxTextCtrl(this, 0, "", wxPoint(0, 0), wxSize(320, 80), wxTE_RIGHT);
	txt->SetEditable(false);
	wxFont font(40, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	txt->SetFont(font);

	topsizer->Add((txt), 1, wxEXPAND | wxALL);

	ButtonFactory factory(this);
	
	for (int i = 1; i <= 24; ++i) {
		buttons[i - 1] = factory.CreateButton();
		btnsizer->Add((buttons[i - 1]), 1, wxEXPAND | wxALL);
		if (i % 4 == 0) {
			btnsizer->AddGrowableRow(factory.curRow);
			factory.curRow++;
			factory.y += 60;
		}
		if (i % 6 == 0) {
			btnsizer->AddGrowableCol(factory.curCol);
			factory.curCol++;
		}
	}

	topsizer->Add(btnsizer, 0, wxEXPAND | wxALL);
	SetSizerAndFit(topsizer);

}

MainWindow::~MainWindow() {
	delete txt;
	for (int i = 0; i < buttons.size(); ++i) {
		delete buttons[i];
	}
}

//2 lists 
//A list of the operators as strings
//A list of the numbers as floats
//And a string to append all the digits to until the user presses an operator button

std::vector<std::string> opAsString;
std::vector<float> numAsInt;
std::string numberHolder = "";

void MainWindow::OnButtonClicked(wxCommandEvent& evt) {
	CalculatorProcessor* process = CalculatorProcessor::GetInstance();
	if (process->GetText() == nullptr) {
		process->SetTxt(txt);
	}
	int id = evt.GetId();
	wxString btnText = buttons[id - 1]->GetLabel();

	if (!txt->IsEmpty() && (btnText == "C" || btnText == "CE" || btnText == "dec." || btnText == "bin." || btnText == "hex." || btnText == "=")) {
		if (btnText == "C" || btnText == "CE") {
			process->Clear();
		}
		else if (btnText == "dec." && !process->ContainsOp()) {
			//dec. button
			process->Dec();
			process->isDec = true;
			process->isHex = false;
			process->isBin = false;

		}
		else if (btnText == "bin." && !process->ContainsOp()) {
			//bin. button
			process->Bin();
			process->isDec = false;
			process->isHex = false;
			process->isBin = true;
		}
		else if (btnText == "hex." && !process->ContainsOp()) {
			//hex. button
			process->Hex();
			process->isDec = false;
			process->isHex = true;
			process->isBin = false;
		}
		else {
			//= button
			process->Equals();
		}
	}
	else if (process->isDec) {
		if (!txt->IsEmpty() && process->opNotPressedLast && (btnText == "+" || btnText == "-" || btnText == "*" || btnText == "/" || btnText == "%" || btnText == "DEL")) { //If textcontrol is NOT empty
			if (btnText == "+") {
				process->Add();
			}
			else if (btnText == "-") {
				process->Subtract();
			}
			else if (btnText == "*") {
				process->Multiply();
			}
			else if (btnText == "/") {
				process->Divide();
			}
			else if (btnText == "%") {
				process->Mod();
			}
			else if (btnText == "DEL") {
				//DEL button
			}
			process->opNotPressedLast = false;
			txt->AppendText(buttons[id - 1]->GetLabel());
		}
		else if ((btnText == "0" && process->GetNumberHolder() != "") || btnText == "1" || btnText == "2" || btnText == "3" || btnText == "4" || btnText == "5" || btnText == "6" || btnText == "7" || btnText == "8" || btnText == "9") {
			process->AddNumber(btnText);
			txt->AppendText(buttons[id - 1]->GetLabel());
			process->opNotPressedLast = true;
		}
	}
	evt.Skip();
}

