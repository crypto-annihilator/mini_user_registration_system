//Dependency Inversion Principle (DIP)
//Interface Segregation Principle (ISP)

#ifndef I_EMAIL_SERVICE
#define I_EMAIL_SERVICE

#include "user.h"

class IEmailService 
{
public:
  virtual void sendConfirmation(const User& user) = 0;
  virtual ~IEmailService() = default;
};

#endif //I_EMAIL_SERVICE
