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

	SECTION("Number Comma Number") {

	}

	SECTION("Number Newline Number") {

	}

	SECTION("Number Delimination Number Delimination Number"){
	}

	SECTION("Negative Number") {
	
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