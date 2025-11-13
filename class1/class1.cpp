#include <iostream>
using namespace std;

int main()
{
  cout << "**Welcome to Calculator Program**\n";
  cout << "**Enter Two Numbers**\n";
  float n1, n2;

  cout << "\n Enter the Value First number 1: ";
  cin >> n1;
  cout << "\n Enter the Value First number 2: ";
  cin >> n2;
  float sum, sub, mul, div;
  sum = n1 + n2;
  sub = n1 - n2;
  mul = n1 * n2;
  div = n1 / n2;
  cout << "\n The Sum of two n1 and n2: " << sum;
  cout << "\n The Subtraction of two n1 and n2: " << sub;
  cout << "\n The Multiplication of two n1 and n2: " << mul;
  cout << "\n The Division of two n1 and n2: " << div;
  cout << "\n \n Thank you for using My Calculator Program! Bye! Bye!";
  system("pause");
  return 0;
}