#include "user.h"

User::User(const std::string& email, const std::string& name, int age) 
  : m_email{email}
  , m_name{name}
  , m_age{age}
{}

User::~User() {}

std::string User::getEmail() const
{
  return m_email;
}

std::string User::getName() const
{
  return m_name;
}

int User::getAge() const 
{
  return m_age;
}
