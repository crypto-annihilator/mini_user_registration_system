//Dependency Inversion Principe(DIP)
//Interface Segregation Principle (ISP)

#ifndef IUSER_REPOSITORY
#define IUSER_REPOSITORY

#include "user.h"

class IUserRepository 
{
public:
  virtual void save(const User& user) = 0;
  virtual ~IUserRepository() = default;
};


#endif //IUSER_REPOSITORY
