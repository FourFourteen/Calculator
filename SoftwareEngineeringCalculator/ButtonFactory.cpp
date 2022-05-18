#include "ButtonFactory.h"
#include "MainWindow.h"

ButtonFactory::ButtonFactory(MainWindow* _win) {
	win = _win;
}

wxButton* ButtonFactory::CreateButton() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel-1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}

wxButton* ButtonFactory::CreateButton1() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton2() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton3() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton4() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton5() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton6() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton7() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton8() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton9() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton10() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton11() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton12() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton13() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton14() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton15() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton16() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton17() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton18() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton19() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton20() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton21() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton22() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton23() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton24() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel - 1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
