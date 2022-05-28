#pragma once
#include "../SoftwareEngineeringCalculator/MainWindow.h"
#include "../SoftwareEngineeringCalculator/CalculatorProcessor.h"
class CalculatorProcessorTests
{
public:
	MainWindow* window;
	CalculatorProcessor* instance;
	CalculatorProcessorTests();
	~CalculatorProcessorTests();
	void hexTest1();
	void hexTest2();
	void binTest1();
	void binTest2();
	void binTest3();
	void addTest();
	void subTest();
	void multTest();
	void divTest();
	void modTest();
};

