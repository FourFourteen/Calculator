#include "../SoftwareEngineeringCalculator/MainWindow.h"
#include "../SoftwareEngineeringCalculator/ButtonFactory.h"

ButtonFactory::ButtonFactory(MainWindow* _win) {
	win = _win;
}

wxButton* ButtonFactory::CreateButton() {
	wxButton* temp = new wxButton(win, idLabel, win->symbols[idLabel-1], wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
//{ "%", "CE", "C", "DEL", "dec.", "bin.", "hex.", "/", "7", "8", "9", "*", "4", "5", "6", "-", "1", "2", "3", "+", "-", "0", ".", "=" }
wxButton* ButtonFactory::CreateButton1() {
	wxButton* temp = new wxButton(win, 1, "%", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton2() {
	wxButton* temp = new wxButton(win, 2, "CE", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton3() {
	wxButton* temp = new wxButton(win, 3, "C", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton4() {
	wxButton* temp = new wxButton(win, 4, "DEL", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton5() {
	wxButton* temp = new wxButton(win, 5, "dec.", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton6() {
	wxButton* temp = new wxButton(win, 6, "bin.", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton7() {
	wxButton* temp = new wxButton(win, 7, "hex.", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton8() {
	wxButton* temp = new wxButton(win, 8, "/", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton9() {
	wxButton* temp = new wxButton(win, 9, "7", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton10() {
	wxButton* temp = new wxButton(win, 10, "8", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton11() {
	wxButton* temp = new wxButton(win, 11, "9", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton12() {
	wxButton* temp = new wxButton(win, 12, "*", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton13() {
	wxButton* temp = new wxButton(win, 13, "4", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton14() {
	wxButton* temp = new wxButton(win, 14, "5", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton15() {
	wxButton* temp = new wxButton(win, 15, "6", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton16() {
	wxButton* temp = new wxButton(win, 16, "-", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton17() {
	wxButton* temp = new wxButton(win, 17, "1", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton18() {
	wxButton* temp = new wxButton(win, 18, "2", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton19() {
	wxButton* temp = new wxButton(win, 19, "3", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton20() {
	wxButton* temp = new wxButton(win, 20, "+", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton21() {
	wxButton* temp = new wxButton(win, 21, "-", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton22() {
	wxButton* temp = new wxButton(win, 22, "0", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton23() {
	wxButton* temp = new wxButton(win, 23, ".", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
wxButton* ButtonFactory::CreateButton24() {
	wxButton* temp = new wxButton(win, 24, "=", wxPoint(((idLabel - 1) % 4) * 80, y), size);
	temp->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainWindow::OnButtonClicked, win);
	idLabel++;
	return temp;
}
