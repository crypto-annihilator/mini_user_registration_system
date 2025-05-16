#include "user_service.h"

UserService::UserService(IEmailService* emailService, IUserRepository* repo)
  : m_emailService {emailService}
  , m_repo {repo}
{}

UserService::~UserService() {}

void UserService::registerUser(const User& user)
{
  m_repo->save(user);
  m_emailService->sendConfirmation(user);
}
