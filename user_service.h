//Dependency Inversion Principe(DIP) is the continuation of IEmailService and IUserRepository  

#ifndef USER_SERVICE
#define USER_SERVICE

#include "user_repository.h"
#include "email_service.h"
#include "user.h"

class UserService 
{
public:
  UserService(IEmailService* emailService, IUserRepository* repo);
  ~UserService();

public:
  void registerUser(const User& user);

private:
  IEmailService* m_emailService;
  IUserRepository* m_repo;
};


#endif //USER_SERVICE
