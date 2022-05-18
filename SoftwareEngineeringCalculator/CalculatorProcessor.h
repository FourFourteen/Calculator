#pragma once
#include "wx\wx.h"
#include <string>
class CalculatorProcessor
{
private:
	CalculatorProcessor() {};
	int findIndex(int index1, std::vector<int> lIndex);
	static CalculatorProcessor* instance;
public:
	CalculatorProcessor& operator=(CalculatorProcessor& _assign) = delete;
	CalculatorProcessor(const CalculatorProcessor& _copy) = delete;
	static CalculatorProcessor* GetInstance() {
		if (instance == nullptr) {
			instance = new CalculatorProcessor();
		}
		return instance;
	}

	int Calculate(std::string pblem);
};

