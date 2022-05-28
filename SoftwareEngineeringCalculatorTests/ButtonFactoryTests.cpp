#include "ButtonFactoryTests.h"


ButtonFactoryTests::ButtonFactoryTests() {
	window = new MainWindow();
	factory = ButtonFactory(window);
}
ButtonFactoryTests::~ButtonFactoryTests() {
	delete window;
}
void ButtonFactoryTests::isMod() {
	wxButton* btn = factory.CreateButton1();

	if (btn->GetLabel() == "%") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
}
void ButtonFactoryTests::isDec() {
	wxButton* btn = factory.CreateButton5();

	if (btn->GetLabel() == "dec.") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
}
void ButtonFactoryTests::is8() {
	wxButton* btn = factory.CreateButton10();

	if (btn->GetLabel() == "8") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
}
void ButtonFactoryTests::is6() {
	wxButton* btn = factory.CreateButton15();

	if (btn->GetLabel() == "6") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
}
void ButtonFactoryTests::isPlus() {
	wxButton* btn = factory.CreateButton20();

	if (btn->GetLabel() == "+") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
}
void ButtonFactoryTests::isID1() {
	wxButton* btn = factory.CreateButton1();

	if (btn->GetId() == 1) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
}
void ButtonFactoryTests::isID5() {
	wxButton* btn = factory.CreateButton5();

	if (btn->GetId() == 5) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
}
void ButtonFactoryTests::isID10() {
	wxButton* btn = factory.CreateButton10();

	if (btn->GetId() == 10) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
}
void ButtonFactoryTests::isID15() {
	wxButton* btn = factory.CreateButton15();

	if (btn->GetId() == 15) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
}
void ButtonFactoryTests::isID20() {
	wxButton* btn = factory.CreateButton20();

	if (btn->GetId() == 20) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
}