#include <gtest/gtest.h>
#include "../../src/PasswordVerification/DigitVerificator.h"

TEST(DigitVerificatorTest, ValidInputReturnsTrue)
{
	std::string password = "0";

	DigitVerificator* verificator = new DigitVerificator;
	auto result = verificator->Handle(password);

	EXPECT_TRUE(result);
}

TEST(DigitVerificatorTest, InvalidInputReturnsFalse)
{
	std::string password = "";

	DigitVerificator* verificator = new DigitVerificator;
	auto result = verificator->Handle(password);

	EXPECT_FALSE(result);
}