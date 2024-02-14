#pragma once

#include <string>

class PasswordVerificationHandler 
{
public:
    virtual PasswordVerificationHandler* SetNext(PasswordVerificationHandler* handler) = 0;
    virtual bool Handle(std::string request) = 0;
};