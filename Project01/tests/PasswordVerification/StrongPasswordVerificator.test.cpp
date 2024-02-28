#include <gtest/gtest.h>
#include "../../src/PasswordVerification/StrongPasswordVerificator.h"

TEST(StrongPasswordVerificatorTest, ValidInputReturnsTrue)
{
	std::string password = "@zV^L#{*2:2Ntm6";

	StrongPasswordVerificator* strongPasswordVerificator = new StrongPasswordVerificator;
	auto result = strongPasswordVerificator->IsStrongPassword(password);

	EXPECT_TRUE(result);
}

TEST(StrongPasswordVerificatorTest, InvalidInputReturnsFalse)
{
	std::string password = "";

	StrongPasswordVerificator* strongPasswordVerificator = new StrongPasswordVerificator;
	auto result = strongPasswordVerificator->IsStrongPassword(password);

	EXPECT_FALSE(result);
}