#include "PasswordVerificationAbstractHandler.h"

PasswordVerificationAbstractHandler::PasswordVerificationAbstractHandler() : next_handler_(nullptr)
{

}

PasswordVerificationHandler* PasswordVerificationAbstractHandler::SetNext(PasswordVerificationHandler* handler) 
{
    this->next_handler_ = handler;
    return handler;
}

bool PasswordVerificationAbstractHandler::Handle(std::string request) 
{
    if (this->next_handler_) {
        return this->next_handler_->Handle(request);
    }

    //return {};
    return true;
}