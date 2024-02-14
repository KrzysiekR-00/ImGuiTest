#pragma once

#include "PasswordVerificationAbstractHandler.h"
#include <algorithm>

class UppercaseLetterVerificator : public PasswordVerificationAbstractHandler 
{
public:
    bool Handle(std::string password) override;
};