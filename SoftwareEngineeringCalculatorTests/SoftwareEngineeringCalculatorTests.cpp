#include "ButtonFactoryTests.h"
#include "CalculatorProcessorTests.h"
#include "../SoftwareEngineeringCalculator/CalculatorProcessor.h"
#include <iostream>

int main()
{
    std::cout << "Button Factory Tests:\n";
    ButtonFactoryTests btnTests = ButtonFactoryTests();
    btnTests.isID1();
    btnTests.isID5();
    btnTests.isID10();
    btnTests.isID15();
    btnTests.isID20();
    btnTests.isLabelmod();
    btnTests.isLabeldec();
    btnTests.isLabel8();
    btnTests.isLabel6();
    btnTests.isLabelplus();
    std::cout << "\nProcessor Tests:\n";
    CalculatorProcessorTests procTests = CalculatorProcessorTests();
    procTests.hexTest1();
    procTests.hexTest2();
    procTests.binTest1();
    procTests.binTest2();
    procTests.binTest3();
    procTests.additionTest();
    procTests.subtractionTest();
    procTests.mulitplicationTest();
    procTests.divisionTest();
    procTests.modTest();

}

