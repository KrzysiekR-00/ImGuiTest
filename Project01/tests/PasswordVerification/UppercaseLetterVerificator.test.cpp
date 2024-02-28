#include <gtest/gtest.h>
#include "../../src/PasswordVerification/UppercaseLetterVerificator.h"

TEST(UppercaseLetterVerificatorTest, ValidInputReturnsTrue)
{
	std::string password = "A";

	UppercaseLetterVerificator* verificator = new UppercaseLetterVerificator;
	auto result = verificator->Handle(password);

	EXPECT_TRUE(result);
}

TEST(UppercaseLetterVerificatorTest, InvalidInputReturnsFalse)
{
	std::string password = "a";

	UppercaseLetterVerificator* verificator = new UppercaseLetterVerificator;
	auto result = verificator->Handle(password);

	EXPECT_FALSE(result);
}