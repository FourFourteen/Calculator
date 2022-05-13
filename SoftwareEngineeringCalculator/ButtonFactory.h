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
	wxButton* CreateButton();
	int y = 80;
	int curRow = 0;
	int curCol = 0;
};

