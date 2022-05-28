#pragma once
#include "wx/wx.h"
#include "MainWindow.h"
#include "App.h"

class ButtonFactory
{
private:
	int idLabel = 1;
	wxSize size = wxSize(80, 60);
	MainWindow* win;
public:
	ButtonFactory(MainWindow* _win);
	ButtonFactory();
	wxButton* CreateButton();
	int y = 80;
	int curRow = 0;
	int curCol = 0;

	wxButton* CreateButton1();
	wxButton* CreateButton2();
	wxButton* CreateButton3();
	wxButton* CreateButton4();
	wxButton* CreateButton5();
	wxButton* CreateButton6();
	wxButton* CreateButton7();
	wxButton* CreateButton8();
	wxButton* CreateButton9();
	wxButton* CreateButton10();
	wxButton* CreateButton11();
	wxButton* CreateButton12();
	wxButton* CreateButton13();
	wxButton* CreateButton14();
	wxButton* CreateButton15();
	wxButton* CreateButton16();
	wxButton* CreateButton17();
	wxButton* CreateButton18();
	wxButton* CreateButton19();
	wxButton* CreateButton20();
	wxButton* CreateButton21();
	wxButton* CreateButton22();
	wxButton* CreateButton23();
	wxButton* CreateButton24();



};