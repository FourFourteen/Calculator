#include "CalculatorProcessorTests.h"

void CalculatorProcessorTests::hexTest1() {
	wxString str = "a1fd";
	instance->AddNumber("41469");
	std::string result = instance->Hex();

	if (result == str) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}

void CalculatorProcessorTests::hexTest2() {
	wxString str = "19e";
	instance->AddNumber("414");
	std::string result = instance->Hex();

	if (result == str) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}

void CalculatorProcessorTests::binTest1() {
	wxString str = "110011110";
	instance->AddNumber("414");
	std::string result = instance->Bin();

	if (result == str) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}

void CalculatorProcessorTests::binTest2() {
	wxString str = "1010000111111101";
	instance->AddNumber("41469");
	std::string result = instance->Bin();

	if (result == str) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}

void CalculatorProcessorTests::binTest3() {
	wxString str = "1111100101011";
	instance->AddNumber("7979");
	std::string result = instance->Bin();

	if (result == str) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}

void CalculatorProcessorTests::additionTest() {
	instance->AddNumber("2");
	instance->Add();
	instance->AddNumber("2");
	std::string result = instance->Equals();
	if (result == "4") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}

void CalculatorProcessorTests::subtractionTest() {
	instance->AddNumber("5");
	instance->Subtract();
	instance->AddNumber("2");
	std::string result = instance->Equals();
	if (result == "3") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}

void CalculatorProcessorTests::mulitplicationTest() {
	instance->AddNumber("3");
	instance->Multiply();
	instance->AddNumber("2");
	std::string result = instance->Equals();
	if (result == "6") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}

void CalculatorProcessorTests::divisionTest() {
	instance->AddNumber("10");
	instance->Divide();
	instance->AddNumber("5");
	std::string result = instance->Equals();
	if (result == "2") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}

void CalculatorProcessorTests::modTest() {
	instance->AddNumber("11");
	instance->Mod();
	instance->AddNumber("2");
	std::string result = instance->Equals();
	if (result == "1") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}
