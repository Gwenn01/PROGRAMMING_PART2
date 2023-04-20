#include <iostream>

using namespace std;

class Person{
public:    
string name;
int age;    
    
};
int main()
{
    Person person;
    person.name = "gwen";
    person.age = 18;
    
    
   cout << person.name + " ";
   cout << person.age;
    
   return 0; 
}