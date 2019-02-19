#include "catch.hpp"
#include "StringCalculator.hpp"
#include <algorithm>

double StringCalculator(std::string myString)
{
	if (myString == "")
		return 0.0;

	return std::stod(myString);
}
