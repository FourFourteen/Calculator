#pragma once
#include "../SoftwareEngineeringCalculator/MainWindow.h"
#include "../SoftwareEngineeringCalculator/ButtonFactory.h"
class ButtonFactoryTests
{
public:
	MainWindow* window;
	ButtonFactory factory;
	ButtonFactoryTests();
	~ButtonFactoryTests();
	void isMod();
	void isDec();
	void is8();
	void is6();
	void isPlus();
	void isID1();
	void isID5();
	void isID10();
	void isID15();
	void isID20();
};

