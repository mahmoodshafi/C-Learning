#include <iostream>
#include <string>
using namespace std;
void userlogin()
{
   string name,password;
   cout<<"Enter your name: ";
   cin>>name;
   cout<<"Enter your password: ";
   cin>>password;
   cout<<"Login successful. Welcome, "<<name<<"!"<<endl;
}
int main() 
{
    userlogin();
    return 0;
} 