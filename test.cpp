#include"catch.hpp"
#include"StringCalculator.hpp"
#include<string>
using std::string;

TEST_CASE("String Calculator Tests") {

	SECTION("Empty Sring")
	{
		REQUIRE(StringCalculator("") == 0);
	}

	SECTION("Number")
	{
		
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