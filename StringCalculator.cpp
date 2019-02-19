#include "catch.hpp"
#include "StringCalculator.hpp"
#include <algorithm>
#include <exception>

double StringCalculator(std::string myString)
{
	if (myString.empty())
		return 0.0;

	bool twoNumbersPresent = false;
	bool threeNumbersPresent = false;
	std::string secondNumber_String;
	std::string thirdNumber_String;
	for (auto z : myString){

		if (twoNumbersPresent && !threeNumbersPresent)
			secondNumber_String.push_back(z);
		if (threeNumbersPresent)
		    thirdNumber_String.push_back(z);

	    if (z == ',' || z == '\n') {
            if (twoNumbersPresent)
                threeNumbersPresent = true;
            if (!twoNumbersPresent)
                twoNumbersPresent = true;
        }
	}

	size_t size = 0;
    if (twoNumbersPresent)   {size += secondNumber_String.size();}
    if (threeNumbersPresent) {size += thirdNumber_String.size();}

    for (int i = 0; i < size; ++i) {
        myString.pop_back();
    }

    if (!threeNumbersPresent) {thirdNumber_String = "0";}
    if (!twoNumbersPresent)   {secondNumber_String = "0";}

    double firstNumber_Double  = std::stod(myString);
    double secondNumber_Double = std::stod(secondNumber_String);
    double thirdNumber_Double  = std::stod(thirdNumber_String);

    if (firstNumber_Double < 0  ||
        secondNumber_Double < 0 ||
        thirdNumber_Double < 0)
    {
        throw std::logic_error("Cannot add negative numbers");
    }

    return firstNumber_Double + secondNumber_Double + thirdNumber_Double;
}
