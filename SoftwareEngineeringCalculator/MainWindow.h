#pragma once
#include "wx/wx.h"
class MainWindow : public wxFrame
{
public:
	MainWindow();
	~MainWindow();

public:
	int nFieldWidth = 4;
	int nFieldHeight = 6;
	wxButton** btn;
	int* nField = nullptr;
	wxTextCtrl* txtCtrl = nullptr;
};

