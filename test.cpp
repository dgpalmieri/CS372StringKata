#include"catch.hpp"
#include"StringCalculator.hpp"
#include<string>
using std::string;

TEST_CASE("String Calculator Tests") {

	SECTION("Empty String returns 0")
	{
		REQUIRE(StringCalculator("") == 0);
	}

	SECTION("Single number returns itself")
	{
		REQUIRE(StringCalculator("0") == 0);
		REQUIRE(StringCalculator("1") == 1);
		REQUIRE(StringCalculator("3.14") == 3.14);
		REQUIRE(StringCalculator("10") == 10);
	}

	SECTION("Two Numbers Separated by Commas Add Together") {
        REQUIRE(StringCalculator("0,0") == 0);
        REQUIRE(StringCalculator("1,1") == 2);
        REQUIRE(StringCalculator("2,2") != 5);                  // credit: G. Orwell
        REQUIRE(StringCalculator("5,7") == 12);
        REQUIRE(StringCalculator("13.13,5.66") == 18.79);
        REQUIRE(StringCalculator("21,21") == 42);
	}

	SECTION("Two Numbers Separated by Newlines Add Together") {
        REQUIRE(StringCalculator("0\n0") == 0);
        REQUIRE(StringCalculator("2\n2") == 4);
        REQUIRE(StringCalculator("5\n12.5") == 17.5);
        REQUIRE(StringCalculator("42\n42") == 84);

	}

	SECTION("Three Numbers with Either Deliminator Return their Sum"){
	}

	SECTION("Negative Numbers Throw Exceptions") {
	
	}

	SECTION("Number Over a Thousand") {

	}

	SECTION("Single Char Custom Deliminator") {

	}

	SECTION("Multi Char Custom Deliminator") {
	
	}

	SECTION("Multiple Custom Deliminators"){
	
	}
}