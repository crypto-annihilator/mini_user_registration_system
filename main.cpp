#include "file_repository.h"
#include "gmail_service.h"
#include "user_service.h"
#include "user.h"

int main()
{
  FileRepository repo; 
  GmailService gmail;
  User user("anna@gmail", "Anna", 26);

  UserService service(&gmail, &repo); //Liskov Substutitution Principle
  service.registerUser(user);
  return 0;
}
