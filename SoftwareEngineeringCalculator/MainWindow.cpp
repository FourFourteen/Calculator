#include "MainWindow.h"
#include <vector>
#include <string>

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(337, 480)) {
	wxSize size = wxSize(80, 60);
	int y = 80;

	txt = new wxTextCtrl(this, 0, "", wxPoint(0, 0), wxSize(320, 80));
	
	for (int i = 1; i <= 24; ++i) {
		buttons[i-1] = new wxButton(this, i, symbols[i-1], wxPoint(((i - 1) % 4) * 80, y), size);
		if (i % 4 == 0) {
			y += 60;
		}
	}

}

MainWindow::~MainWindow() {
}
