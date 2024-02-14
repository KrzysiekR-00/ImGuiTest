#pragma once

#include "PasswordVerificationAbstractHandler.h"
#include <algorithm>

class DigitVerificator : public PasswordVerificationAbstractHandler 
{
public:
    bool Handle(std::string password) override;
};