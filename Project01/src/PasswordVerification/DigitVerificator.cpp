#include "DigitVerificator.h"

bool DigitVerificator::Handle(std::string password) 
{
    if (!std::any_of(password.begin(), password.end(), isdigit)) return false;
    else return PasswordVerificationAbstractHandler::Handle(password);
}
