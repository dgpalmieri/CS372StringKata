#include "catch.hpp"
#include "StringCalculator.hpp"
#include <algorithm>

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

    double firstNumber_Double  = std::stod(myString);
    double secondNumber_Double = std::stod(secondNumber_String);
    double thirdNumber_Double  = std::stod(thirdNumber_String);

    if (!threeNumbersPresent) {thirdNumber_Double = 0;}
    if (!twoNumbersPresent)   {secondNumber_Double = 0;}

    return firstNumber_Double + secondNumber_Double + thirdNumber_Double;

//	if (twoNumbersPresent && !threeNumbersPresent) {
//		for (size_t i = 0; i < secondNumber_String.size() + 1; ++i) {
//			myString.pop_back();
//		}
//		return std::stod(myString) + std::stod(secondNumber_String);
//	}
//	else if (twoNumbersPresent && threeNumbersPresent) {
//        for (int i = 0; i < secondNumber_String.size() + thirdNumber_String.size(); ++i) {
//            myString.pop_back();
//        }
//        return std::stod(myString) + std::stod(secondNumber_String) + std::stod(thirdNumber_String);
//	}
//	else
//	    return std::stod(myString);

}
