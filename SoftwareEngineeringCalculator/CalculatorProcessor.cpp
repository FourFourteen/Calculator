#include "CalculatorProcessor.h"



int CalculatorProcessor::Calculate(std::string pblem) {
	while (pblem.find("+") > -1 || pblem.find("-") > -1 || pblem.find("*") > -1 || pblem.find("/") > -1) {
		std::vector<int> indexes;
		for (int i = 0; i < pblem.size(); ++i) {
			std::string subPblem = pblem.substr(i, 1);
			if (subPblem == "+" || subPblem == "-" || subPblem == "*" || subPblem == "/") {
				indexes.push_back(i);
			}
		}
		if (pblem.find("*") > -1 || pblem.find("/") > -1) {
			int mult = pblem.find("*");
			int div = pblem.find("/");

			std::string firstNumber;
			std::string secondNumber;
			if (mult > div) {
				int multIndexes = findIndex(mult, indexes); //Returns the index of * in indexes... it's a little confusing
				if (multIndexes - 1 < 0) {
					firstNumber = pblem.substr(0, indexes[multIndexes]);
				}
				else {
					firstNumber = pblem.substr(indexes[multIndexes - 1] + 1, indexes[multIndexes] - 1);
				}

				if (multIndexes + 1 > indexes.size() - 1) {
					secondNumber = pblem.substr(indexes[multIndexes] + 1);
				}
				else {
					secondNumber = pblem.substr(indexes[multIndexes] + 1, indexes[multIndexes + 1] - 1);
				}
			}
			else if (div > mult) {

			}
		}
		else if (pblem.find("-") > -1 || pblem.find("+") > -1) {
			int plus = pblem.find("+");
			int min = pblem.find("-");
			if (plus > min) {

			}
			else if (min > plus) {

			}
		}
	}
}

int findIndex(int index1, std::vector<int> lIndex) {
	for (int i = 0; i < lIndex.size(); ++i) {
		if (index1 == lIndex[i]) {
			return i;
		}
	}
	return -1;
}
