#include "ButtonFactoryTests.h"

void ButtonFactoryTests::isID1() {
	MainWindow* window = new MainWindow();
	ButtonFactory* factory = new ButtonFactory(window);

	wxButton* btn = factory->CreateButton1();

	if (btn->GetId() == 1) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
	delete window;
}

void ButtonFactoryTests::isID5() {
	MainWindow* window = new MainWindow();
	ButtonFactory* factory = new ButtonFactory(window);

	wxButton* btn = factory->CreateButton5();

	if (btn->GetId() == 5) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
	delete window;
}

void ButtonFactoryTests::isID10() {
	MainWindow* window = new MainWindow();
	ButtonFactory* factory = new ButtonFactory(window);

	wxButton* btn = factory->CreateButton10();

	if (btn->GetId() == 10) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
	delete window;
}

void ButtonFactoryTests::isID15() {
	MainWindow* window = new MainWindow();
	ButtonFactory* factory = new ButtonFactory(window);

	wxButton* btn = factory->CreateButton15();

	if (btn->GetId() == 15) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
	delete window;
}

void ButtonFactoryTests::isID20() {
	MainWindow* window = new MainWindow();
	ButtonFactory* factory = new ButtonFactory(window);

	wxButton* btn = factory->CreateButton20();

	if (btn->GetId() == 20) {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
	delete window;
}

void ButtonFactoryTests::isLabelmod() {
	MainWindow* window = new MainWindow();
	ButtonFactory* factory = new ButtonFactory(window);

	wxButton* btn = factory->CreateButton1();

	if (btn->GetLabel() == "%") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
	delete window;
}

void ButtonFactoryTests::isLabeldec() {
	MainWindow* window = new MainWindow();
	ButtonFactory* factory = new ButtonFactory(window);

	wxButton* btn = factory->CreateButton5();

	if (btn->GetLabel() == "dec.") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
	delete window;
}

void ButtonFactoryTests::isLabel8() {
	MainWindow* window = new MainWindow();
	ButtonFactory* factory = new ButtonFactory(window);

	wxButton* btn = factory->CreateButton10();

	if (btn->GetLabel() == "8") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
	delete window;
}

void ButtonFactoryTests::isLabel6() {
	MainWindow* window = new MainWindow();
	ButtonFactory* factory = new ButtonFactory(window);

	wxButton* btn = factory->CreateButton15();

	if (btn->GetLabel() == "6") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
	delete window;
}

void ButtonFactoryTests::isLabelplus() {
	MainWindow* window = new MainWindow();
	ButtonFactory* factory = new ButtonFactory(window);

	wxButton* btn = factory->CreateButton20();

	if (btn->GetLabel() == "+") {
		std::cout << "Pass\n";
	}
	else {
		std::cout << "Fail\n";
	}

	delete btn;
	delete window;
}