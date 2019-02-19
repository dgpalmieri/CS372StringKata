#include "catch.hpp"
#include "StringCalculator.hpp"
#include <algorithm>

double StringCalculator(std::string myString)
{
	if (myString.empty())
		return 0.0;

	bool twoNumbersPresent = false;
	std::string secondNumber;
	for (auto z : myString){
		if (twoNumbersPresent)
			secondNumber.push_back(z);
	    if (z == ',')
	        twoNumbersPresent = true;
	}

	if (twoNumbersPresent) {
		for (size_t i = 0; i < secondNumber.size() + 1; ++i) {
			myString.pop_back();
		}

		return std::stod(myString) + std::stod(secondNumber);
	}
	else
	    return std::stod(myString);
}
