#pragma once

#include "PasswordVerificationAbstractHandler.h"

class LengthVerificator : public PasswordVerificationAbstractHandler {
public:
    bool Handle(std::string password) override {
        if (password.length() < 12) return false;
        else return PasswordVerificationAbstractHandler::Handle(password);
    }
};