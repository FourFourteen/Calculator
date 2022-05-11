#include "MainWindow.h"
#include <vector>
#include <string>

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
	EVT_BUTTON(1, OnButtonClicked)
wxEND_EVENT_TABLE()

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(337, 480)) {
	wxSize size = wxSize(80, 60);
	int y = 80;
	int curRow = 0;
	int curCol = 0;

	wxBoxSizer* topsizer = new wxBoxSizer(wxVERTICAL);
	wxFlexGridSizer* btnsizer = new wxFlexGridSizer(6, 4, 0, 0);
	txt = new wxTextCtrl(this, 0, "", wxPoint(0, 0), wxSize(320, 80), wxTE_RIGHT);
	txt->SetEditable(false);
	wxFont font(40, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	txt->SetFont(font);

	topsizer->Add((txt), 1, wxEXPAND | wxALL);
	
	for (int i = 1; i <= 24; ++i) {
		buttons[i-1] = new wxButton(this, i, symbols[i-1], wxPoint(((i - 1) % 4) * 80, y), size);
		btnsizer->Add((buttons[i - 1]), 1, wxEXPAND | wxALL);
		buttons[i-1]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, this);
		if (i % 4 == 0) {
			btnsizer->AddGrowableRow(curRow);
			curRow++;
			y += 60;
		}
		if (i % 6 == 0) {
			btnsizer->AddGrowableCol(curCol);
			curCol++;
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

void MainWindow::OnButtonClicked(wxCommandEvent& evt) {
	int id = evt.GetId();
	wxString btnText = buttons[id - 1]->GetLabel();
	if (btnText == "DEL" || btnText == "C" || btnText == "CE" || btnText == "dec." || btnText == "bin." || btnText == "hex.") {
		if (btnText == "C" || btnText == "CE") {
			txt->Clear();
		}
		else if (btnText == "DEL") {
			//DEL button
		}
		else if (btnText == "dec.") {
			//dec. button
		}
		else if (btnText == "bin.") {
			//bin. button
		}
		else {
			//hex. button
		}
	}
	else {
		txt->AppendText(buttons[id - 1]->GetLabel());
	}

	evt.Skip();
}
