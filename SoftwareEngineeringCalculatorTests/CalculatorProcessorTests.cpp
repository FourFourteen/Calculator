#include "CalculatorProcessorTests.h"

CalculatorProcessorTests::CalculatorProcessorTests() {
	window = new MainWindow();
	instance = CalculatorProcessor::GetInstance();
	instance->SetTxt(window->GetTxt());
}
CalculatorProcessorTests::~CalculatorProcessorTests() {
	delete window;
}
void CalculatorProcessorTests::hexTest1() {
	instance->AddNumber("414");
	instance->Hex();
	if (instance->GetText()->GetValue() == "19e") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}
void CalculatorProcessorTests::hexTest2() {
	instance->AddNumber("41469");
	instance->Hex();
	if (instance->GetText()->GetValue() == "a1fd") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}
void CalculatorProcessorTests::binTest1() {
	instance->AddNumber("414");
	instance->Bin();
	if (instance->GetText()->GetValue() == "110011110") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}
void CalculatorProcessorTests::binTest2() {
	instance->AddNumber("41469");
	instance->Bin();
	if (instance->GetText()->GetValue() == "1010000111111101") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}
void CalculatorProcessorTests::binTest3() {
	instance->AddNumber("8130");
	instance->Bin();
	if (instance->GetText()->GetValue() == "1111111000010") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}
void CalculatorProcessorTests::addTest() {
	instance->AddNumber("2");
	instance->Add();
	instance->AddNumber("2");
	instance->Equals();
	if (instance->GetText()->GetValue() == "4") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}
void CalculatorProcessorTests::subTest() {
	instance->AddNumber("5");
	instance->Subtract();
	instance->AddNumber("2");
	instance->Equals();
	if (instance->GetText()->GetValue() == "3") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}
void CalculatorProcessorTests::multTest() {
	instance->AddNumber("2");
	instance->Multiply();
	instance->AddNumber("3");
	instance->Equals();
	if (instance->GetText()->GetValue() == "6") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}
void CalculatorProcessorTests::divTest() {
	instance->AddNumber("10");
	instance->Divide();
	instance->AddNumber("2");
	instance->Equals();
	if (instance->GetText()->GetValue() == "5") {
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
	instance->Equals();
	if (instance->GetText()->GetValue() == "1") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}
	instance->Clear();
}