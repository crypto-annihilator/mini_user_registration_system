#ifndef GMAIL_SERVICE_H
#define GMAIL_SERVICE_H

#include <iostream>

#include "user.h"
#include "email_service.h"

class GmailService : public IEmailService {
public:
    void sendConfirmation(const User& user) override {
      std::cout << "Sending confirmation email via Gmail to " << user.getEmail() << std::endl;
    }
};

#endif //GMAIL_SERVICE_H
