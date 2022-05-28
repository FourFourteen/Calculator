#pragma once
#include "../SoftwareEngineeringCalculator/CalculatorProcessor.h"
#include "../SoftwareEngineeringCalculator/MainWindow.h"
#include "wx/wx.h"
class CalculatorProcessorTests
{
private:
	CalculatorProcessor* instance = CalculatorProcessor::GetInstance();
public:
	void hexTest1();
	void hexTest2();
	void binTest1();
	void binTest2();
	void binTest3();
	void additionTest();
	void subtractionTest();
	void mulitplicationTest();
	void divisionTest();
	void modTest();
};

