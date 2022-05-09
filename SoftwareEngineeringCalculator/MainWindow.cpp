#include "MainWindow.h"
#include <vector>
#include <string>

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(337, 480)) {
	wxSize size = wxSize(80, 60);
	int y = 80;
	int curRow = 0;
	int curCol = 0;

	wxBoxSizer* topsizer = new wxBoxSizer(wxVERTICAL);
	wxFlexGridSizer* btnsizer = new wxFlexGridSizer(6, 4, 0, 0);
	txt = new wxTextCtrl(this, 0, "", wxPoint(0, 0), wxSize(320, 80));
	topsizer->Add((txt), 1, wxEXPAND | wxALL);
	
	for (int i = 1; i <= 24; ++i) {
		buttons[i-1] = new wxButton(this, i, symbols[i-1], wxPoint(((i - 1) % 4) * 80, y), size);
		btnsizer->Add((buttons[i - 1]), 1, wxEXPAND | wxALL);
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
}
