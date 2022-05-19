#pragma once
#include "wx\wx.h"
#include <string>
class CalculatorProcessor
{
private:
	CalculatorProcessor() {};
	static CalculatorProcessor* instance;
	wxTextCtrl* txt;

	std::vector<std::string> opAsString;
	std::vector<int> numAsInt;
	std::string numberHolder = "";
	int MDM = 0; //multiply/divide/mod
	int AS = 0; //Addition/subtraction
public:
	CalculatorProcessor& operator=(CalculatorProcessor& _assign) = delete;
	CalculatorProcessor(const CalculatorProcessor& _copy) = delete;
	~CalculatorProcessor();
	static CalculatorProcessor* GetInstance() {
		if (instance == nullptr) {
			instance = new CalculatorProcessor();
		}
		return instance;
	}

	bool opNotPressedLast = false;

	void SetTxt(wxTextCtrl* ctrl) { txt = ctrl; }

	void Add();
	void Subtract();
	void Multiply();
	void Divide();
	void Mod();
	void Equals();
	void AddNumber(wxString btnText);
	void TogglePressedLast();

};

