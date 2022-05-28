#pragma once
#include "wx/wx.h"
#include <vector>
#include <string>
class MainWindow : public wxFrame
{
public:
	MainWindow();
	~MainWindow();
public:
	wxButton* mod = nullptr;
	wxButton* CE = nullptr;
	wxButton* C = nullptr;
	wxButton* DEL = nullptr;
	wxButton* dec = nullptr;
	wxButton* bin = nullptr;
	wxButton* hex = nullptr;
	wxButton* div = nullptr;
	wxButton* seven = nullptr;
	wxButton* eight = nullptr;
	wxButton* nine = nullptr;
	wxButton* mult = nullptr;
	wxButton* four = nullptr;
	wxButton* five = nullptr;
	wxButton* six = nullptr;
	wxButton* min = nullptr;
	wxButton* one = nullptr;
	wxButton* two = nullptr;
	wxButton* three = nullptr;
	wxButton* plus = nullptr;
	wxButton* neg = nullptr;
	wxButton* zero = nullptr;
	wxButton* dot = nullptr;
	wxButton* equals = nullptr;

	wxTextCtrl* txt = nullptr;

	std::vector<wxButton*> buttons{ mod, CE, C, DEL, dec, bin, hex, div, seven, eight, nine, mult, four, five, six, min, one, two, three, plus, neg, zero, dot, equals };
	std::vector<std::string> symbols{ "%", "CE", "C", "DEL", "dec.", "bin.", "hex.", "/", "7", "8", "9", "*", "4", "5", "6", "-", "1", "2", "3", "+", "-", "0", ".", "=" };

	wxBoxSizer* topsizer;
	wxFlexGridSizer* btnsizer;

	void OnButtonClicked(wxCommandEvent& evt);
	//wxDECLARE_EVENT_TABLE();

};

