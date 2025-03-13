#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"
using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("get_prime"){

	REQUIRE(get_prime(10) == vector<int>{2, 3, 5, 7});
	REQUIRE(get_prime(15) == vector<int>{2, 3, 5, 7, 11, 13});
	REQUIRE(get_prime(30) == vector<int>{2, 3, 5, 7, 11, 13, 17, 19, 23, 29});
	REQUIRE(get_prime(50) == vector<int>{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47});
}
TEST_CASE("is_prime"){

	REQUIRE(is_prime(1) == false);
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(3) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(5) == true);
}