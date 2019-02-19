#include "catch.hpp"
#include "StringCalculator.hpp"
#include <algorithm>

double StringCalculator(std::string myString)
{
	if (myString.empty())
		return 0.0;

	bool twoNumbersPresent = false;
	bool threeNumbersPresent = false;
	std::string secondNumber;
	std::string thirdNumber;
	for (auto z : myString){

		if (twoNumbersPresent && !threeNumbersPresent)
			secondNumber.push_back(z);
		if (threeNumbersPresent)
		    thirdNumber.push_back(z);

	    if (z == ',' || z == '\n') {
            if (twoNumbersPresent)
                threeNumbersPresent = true;
            if (!twoNumbersPresent)
                twoNumbersPresent = true;
        }
	}

	if (twoNumbersPresent && !threeNumbersPresent) {
		for (size_t i = 0; i < secondNumber.size() + 1; ++i) {
			myString.pop_back();
		}
		return std::stod(myString) + std::stod(secondNumber);
	}
	else if (twoNumbersPresent && threeNumbersPresent) {
        for (int i = 0; i < secondNumber.size() + thirdNumber.size(); ++i) {
            myString.pop_back();
        }
        return std::stod(myString) + std::stod(secondNumber) + std::stod(thirdNumber);
	}
	else
	    return std::stod(myString);
}
