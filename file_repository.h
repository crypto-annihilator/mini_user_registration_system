//Open Closed Principe (OCP) 
//when my user storage is "file"

#ifndef FILE_REPOSITORY_H
#define FILE_REPOSITORY_H

#include "user_repository.h"
#include "user.h"

class FileRepository : public IUserRepository
{
public:
  void save(const User& user) override;
};

#endif //FILE_REPOSITORY_H
