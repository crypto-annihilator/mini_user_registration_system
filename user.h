//Single Rensposibility Principle (SRP)

#ifndef USER_H
#define USER_H

#include <string>

class User {
public: 
  User(const std::string& email, const std::string& name, int age);
  ~User();

public:
  std::string getName() const;
  std::string getEmail() const;
  int getAge() const;

private: 
  std::string m_email;
  std::string m_name;
  int m_age; 
};


#endif //USER
