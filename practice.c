#include <stdio.h>

class Users {
    public:
    int Password;
    int Balance;
    
Users(int aPassword, int aBalance)
    Password = aPassword;
    Balance = aBalance;

};
int main() 
{
  Users user1(123, 100);

  
  return 0;
}