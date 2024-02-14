#pragma once

#include "PasswordVerificationAbstractHandler.h"
#include <algorithm>

class DigitVerificator : public PasswordVerificationAbstractHandler {
public:
    bool Handle(std::string password) override {
        if (!std::any_of(password.begin(), password.end(), isdigit)) return false;
        else return PasswordVerificationAbstractHandler::Handle(password);
    }
};