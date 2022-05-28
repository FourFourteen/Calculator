#include <iostream>
#include "ButtonFactoryTests.h"
#include "CalculatorProcessorTests.h"

int main()
{
    std::cout << "Button Factory Tests:\n";
    ButtonFactoryTests ButtonTests = ButtonFactoryTests();
    ButtonTests.isMod();
    ButtonTests.isDec();
    ButtonTests.is8();
    ButtonTests.is6();
    ButtonTests.isPlus();
    ButtonTests.isID1();
    ButtonTests.isID5();
    ButtonTests.isID10();
    ButtonTests.isID15();
    ButtonTests.isID20();
    std::cout << "Calculator Processor Tests:\n";
    CalculatorProcessorTests procTests = CalculatorProcessorTests();
    procTests.hexTest1();
    procTests.hexTest2();
    procTests.binTest1();
    procTests.binTest2();
    procTests.binTest3();
    procTests.addTest();
    procTests.subTest();
    procTests.multTest();
    procTests.divTest();
    procTests.modTest();
}

