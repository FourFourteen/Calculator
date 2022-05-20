#include "CalculatorProcessor.h"

void CalculatorProcessor::Add() {
	int test = std::stoi(numberHolder);
	numAsInt.push_back(std::stoi(numberHolder));
	opAsString.push_back("+");
	numberHolder = "";
}

void CalculatorProcessor::Subtract() {
	numAsInt.push_back(std::stoi(numberHolder));
	opAsString.push_back("-");
	numberHolder = "";
}

void CalculatorProcessor::Multiply() {
	numAsInt.push_back(std::stoi(numberHolder));
	opAsString.push_back("*");
	numberHolder = "";
}

void CalculatorProcessor::Divide() {
	numAsInt.push_back(std::stoi(numberHolder));
	opAsString.push_back("/");
	numberHolder = "";
}

void CalculatorProcessor::Mod() {
	numAsInt.push_back(std::stoi(numberHolder));
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
						MDM--;
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
						MDM--;
					}
					else {
						numberIter++;
						stringIter++;
					}
				}
			}

		}
		txt->Clear();
		txt->AppendText(std::to_string(numAsInt[0]));
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
}

