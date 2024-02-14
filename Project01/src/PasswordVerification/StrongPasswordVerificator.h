#pragma once

#include "LengthVerificator.h"
#include "UppercaseLetterVerificator.h"
#include "LowercaseLetterVerificator.h"
#include "DigitVerificator.h"
#include "SpecialCharVerificator.h"

class StrongPasswordVerificator
{
public:
    bool IsStrongPassword(std::string password);
};