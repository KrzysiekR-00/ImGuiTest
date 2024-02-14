#pragma once

#include "PasswordVerificationAbstractHandler.h"
#include <algorithm>

class SpecialCharVerificator : public PasswordVerificationAbstractHandler 
{
public:
    bool Handle(std::string password) override;
};