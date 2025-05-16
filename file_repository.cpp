#include <iostream>

#include "file_repository.h"

void FileRepository::save(const User& user)
{
  std::cout << "save User info in file. User name = "
    << user.getName() << std::endl;
} 
