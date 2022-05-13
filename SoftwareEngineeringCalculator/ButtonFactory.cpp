#include "ButtonFactory.h"
#include "MainWindow.h"

//Push
ButtonFactory::ButtonFactory(MainWindow* _win) {
	win = _win;
}

wxButton* ButtonFactory::CreateButton() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel-1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
