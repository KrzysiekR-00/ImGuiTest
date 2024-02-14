#include "LengthVerificator.h"

bool LengthVerificator::Handle(std::string password) 
{
    if (password.length() < 12) return false;
    else return PasswordVerificationAbstractHandler::Handle(password);
}
