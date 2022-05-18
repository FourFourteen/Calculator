#include "MainWindow.h"
#include <vector>
#include <string>
#include "ButtonFactory.h"

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

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(337, 480)) {

	wxBoxSizer* topsizer = new wxBoxSizer(wxVERTICAL);
	wxFlexGridSizer* btnsizer = new wxFlexGridSizer(6, 4, 0, 0);
	txt = new wxTextCtrl(this, 0, "", wxPoint(0, 0), wxSize(320, 80), wxTE_RIGHT);
	txt->SetEditable(false);
	wxFont font(40, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	txt->SetFont(font);

	topsizer->Add((txt), 1, wxEXPAND | wxALL);

	ButtonFactory factory(this);
	
	for (int i = 1; i <= 24; ++i) {
		switch (i)
		{
		case 1: 
		{
			buttons[i-1] = factory.CreateButton1();
			break;
		}
		case 2:
		{
			buttons[i - 1] = factory.CreateButton2();
			break;
		}
		case 3:
		{
			buttons[i - 1] = factory.CreateButton3();
			break;
		}
		case 4:
		{
			buttons[i - 1] = factory.CreateButton4();
			break;
		}
		case 5:
		{
			buttons[i - 1] = factory.CreateButton5();
			break;
		}
		case 6:
		{
			buttons[i - 1] = factory.CreateButton6();
			break;
		}
		case 7:
		{
			buttons[i - 1] = factory.CreateButton7();
			break;
		}
		case 8:
		{
			buttons[i - 1] = factory.CreateButton8();
			break;
		}
		case 9:
		{
			buttons[i - 1] = factory.CreateButton9();
			break;
		}
		case 10:
		{
			buttons[i - 1] = factory.CreateButton10();
			break;
		}
		case 11:
		{
			buttons[i - 1] = factory.CreateButton11();
			break;
		}
		case 12:
		{
			buttons[i - 1] = factory.CreateButton12();
			break;
		}
		case 13:
		{
			buttons[i - 1] = factory.CreateButton13();
			break;
		}
		case 14:
		{
			buttons[i - 1] = factory.CreateButton14();
			break;
		}
		case 15:
		{
			buttons[i - 1] = factory.CreateButton15();
			break;
		}
		case 16:
		{
			buttons[i - 1] = factory.CreateButton16();
			break;
		}
		case 17:
		{
			buttons[i - 1] = factory.CreateButton17();
			break;
		}
		case 18:
		{
			buttons[i - 1] = factory.CreateButton18();
			break;
		}
		case 19:
		{
			buttons[i - 1] = factory.CreateButton19();
			break;
		}
		case 20:
		{
			buttons[i - 1] = factory.CreateButton20();
			break;
		}
		case 21:
		{
			buttons[i - 1] = factory.CreateButton21();
			break;
		}
		case 22:
		{
			buttons[i - 1] = factory.CreateButton22();
			break;
		}
		case 23:
		{
			buttons[i - 1] = factory.CreateButton23();
			break;
		}
		case 24:
		{
			buttons[i - 1] = factory.CreateButton24();
			break;
		}
		default:
			break;
		}
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

