#pragma once
#include "wx\wx.h"
#include <string>
#include <sstream>
#include "IBaseCommands.h"
#include "AddCommand.h"
#include "SubtractCommand.h"
#include "DivideCommand.h"
#include "MultiplyCommand.h"
#include "ModCommand.h"

class CalculatorProcessor
{
private:
	CalculatorProcessor() {};
	static CalculatorProcessor* instance;
	wxTextCtrl* txt;

	std::vector<std::string> opAsString;
	std::vector<int> numAsInt;
	std::vector<IBaseCommands*> commands;

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
	bool isDec = true;
	bool isHex = false;
	bool isBin = false;

	void SetTxt(wxTextCtrl* ctrl) { txt = ctrl; }

	void Add();
	void Subtract();
	void Multiply();
	void Divide();
	void Mod();
	void Equals();
	void Hex();
	void Bin();
	void Dec();
	wxTextCtrl* GetText();
	void AddNumber(wxString btnText);
	void GetEnd(); //Gets and removes the last number in opAsString
	bool ContainsOp();
	void AddToIntList(); //Checks if numAsInt is empty and if it, adds a number to it
	void Clear();
	std::string GetNumberHolder();
};

