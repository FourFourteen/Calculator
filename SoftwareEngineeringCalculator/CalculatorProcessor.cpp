#include "CalculatorProcessor.h"

void CalculatorProcessor::Add() {
	if (numAsInt.size() == opAsString.size()) {
		numAsInt.push_back(std::stoi(numberHolder));
	}
	opAsString.push_back("+");
	numberHolder = "";
}

void CalculatorProcessor::Subtract() {
	if (numAsInt.size() == opAsString.size()) {
		numAsInt.push_back(std::stoi(numberHolder));
	}
	opAsString.push_back("-");
	numberHolder = "";
}

void CalculatorProcessor::Multiply() {
	if (numAsInt.size() == opAsString.size()) {
		numAsInt.push_back(std::stoi(numberHolder));
	}
	opAsString.push_back("*");
	numberHolder = "";
}

void CalculatorProcessor::Divide() {
	if (numAsInt.size() == opAsString.size()) {
		numAsInt.push_back(std::stoi(numberHolder));
	}
	opAsString.push_back("/");
	numberHolder = "";
}

void CalculatorProcessor::Mod() {
	if (numAsInt.size() == opAsString.size()) {
		numAsInt.push_back(std::stoi(numberHolder));
	}
	opAsString.push_back("%");
	numberHolder = "";
}

void CalculatorProcessor::Equals() {
	if (!(numberHolder == "")) { //Making sure that the user didn't end the equation with a random operator
		numAsInt.push_back(std::stoi(numberHolder));

		for (int i = 0; i < opAsString.size(); ++i) {
			if (opAsString[i] == "+" || opAsString[i] == "-") {
				++AS;
			}
			else {
				++MDM;
			}
		}

		while (numAsInt.size() > 1) {
			std::vector<int>::iterator numberIter = numAsInt.begin(); //2
			std::vector<std::string>::iterator stringIter = opAsString.begin(); //+

			if (MDM > 0) {
				int operatorTotal;
				for (int i = 0; i < opAsString.size(); ++i) {          //opAsString = [+, *, -]     numAsInt = [2, 2, 3, 1]
					if (opAsString[i] == "*") {
						operatorTotal = numAsInt[i] * numAsInt[i + 1];   //operatorTotal = 2 * 3 (6)
						numAsInt[i] = operatorTotal;  //[2, 6, 3, 1]

						numberIter++; // copyNumberIter = 3
						numAsInt.erase(numberIter); // numAsInt = [2, 6, 1]
						
						opAsString.erase(stringIter); // opAsString = [+, -]

						numberIter = numAsInt.begin();
						stringIter = opAsString.begin();
						i = 0;
						MDM--;
					}
					else if (opAsString[i] == "/") {
						operatorTotal = numAsInt[i] / numAsInt[i + 1];   //operatorTotal = 2 / 3 (2/3)
						numAsInt[i] = operatorTotal;  //[2, 6, 3, 1]

						numberIter++; // copyNumberIter = 3
						numAsInt.erase(numberIter); // numAsInt = [2, 6, 1]

						opAsString.erase(stringIter); // opAsString = [+, -]

						numberIter = numAsInt.begin();
						stringIter = opAsString.begin();
						i = 0;
						MDM--;
					}
					else if (opAsString[i] == "%") {
						operatorTotal = numAsInt[i] % numAsInt[i + 1];   //operatorTotal = 2 % 3 (2)
						numAsInt[i] = operatorTotal;  //[2, 6, 3, 1]

						numberIter++; // copyNumberIter = 3
						numAsInt.erase(numberIter); // numAsInt = [2, 6, 1]

						opAsString.erase(stringIter); // opAsString = [+, -]

						numberIter = numAsInt.begin();
						stringIter = opAsString.begin();
						i = 0;
						MDM--;
					}
					else {
						numberIter++;
						stringIter++;
					}
				}
			}
			else if (AS > 0) {
				int operatorTotal;
				for (int i = 0; i < opAsString.size(); ++i) {
					if (opAsString[i] == "+") {
						operatorTotal = numAsInt[i] + numAsInt[i + 1];   //operatorTotal = 2 + 3 (5)
						numAsInt[i] = operatorTotal;  //[2, 6, 3, 1]

						numberIter++; // copyNumberIter = 3
						numAsInt.erase(numberIter); // numAsInt = [2, 6, 1]

						opAsString.erase(stringIter); // opAsString = [+, -]

						numberIter = numAsInt.begin();
						stringIter = opAsString.begin();
						i = 0;
						AS--;
					}
					else if (opAsString[i] == "-") {
						operatorTotal = numAsInt[i] - numAsInt[i + 1];   //operatorTotal = 2 - 3 (-1)
						numAsInt[i] = operatorTotal;  //[2, 6, 3, 1]

						numberIter++; // copyNumberIter = 3
						numAsInt.erase(numberIter); // numAsInt = [2, 6, 1]

						opAsString.erase(stringIter); // opAsString = [+, -]

						numberIter = numAsInt.begin();
						stringIter = opAsString.begin();
						i = 0;
						AS--;
					}
					else {
						numberIter++;
						stringIter++;
					}
				}
			}

		}
		txt->Clear();
		if (isHex) {
			Hex();
		}
		else if (isBin) {
			Bin();
		}
		else {
			txt->AppendText(std::to_string(numAsInt[0]));
		}

		numberHolder = std::to_string(numAsInt[0]);
		numAsInt.clear();
		opAsString.clear();
		AS = 0;
		MDM = 0;
	}
}

void CalculatorProcessor::AddNumber(wxString btnText) {
	numberHolder += btnText;
}

CalculatorProcessor::~CalculatorProcessor() {
	delete instance;
	delete txt;
}

void CalculatorProcessor::Hex() {
	std::ostringstream ss;
	std::string result;

	AddToIntList();

	ss << std::hex << numAsInt[0];
	result = ss.str();
	
	txt->Clear();
	txt->AppendText(result);
}

void CalculatorProcessor::Bin() {
	std::string result;
	int convert;
	
	AddToIntList();

	convert = numAsInt[0];

	while (convert != 0) {
		result += (convert % 2 == 0 ? "0" : "1");
		convert /= 2;
	}

	txt->Clear();
	wxString reverse = std::string(result.rbegin(), result.rend());
	txt->AppendText(reverse);
}

void CalculatorProcessor::Dec() {
	std::string result;

	AddToIntList();

	result += std::to_string(numAsInt[0]);

	txt->Clear();
	txt->AppendText(result);
}

wxTextCtrl* CalculatorProcessor::GetText() {
	return txt;
}

void CalculatorProcessor::GetEnd() {
	std::vector<int>::iterator it = numAsInt.begin();
	for (int i = 1; i < numAsInt.size(); ++i) {
		it++;
	}

	if (numAsInt.size() != 0) {
		numAsInt.erase(it);
	}
}

bool CalculatorProcessor::ContainsOp() {
	if (opAsString.size() > 0) {
		return true;
	}
	return false;
}

void CalculatorProcessor::AddToIntList() {
	if (numAsInt.size() == 0) {
		numAsInt.push_back(std::stoi(numberHolder));
	}
}

void CalculatorProcessor::Clear() {
	numAsInt.clear();
	opAsString.clear();
	txt->Clear();
	numberHolder = "";
}

std::string CalculatorProcessor::GetNumberHolder() {
	return numberHolder;
}