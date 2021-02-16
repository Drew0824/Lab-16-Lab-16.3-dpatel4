#include <iostream>
#include <string>
using namespace std;

void add(int a, int b)
{
  int sum = a + b;
  cout << a << " + " << b << " = " << sum << endl;

}

void sub(int a, int b)
{
  int sum = a -b;
  cout << a << "-" << b << "=" << sum << endl;

}

void mul(int a, int b)
{
  int sum = a * b;
  cout << a << "*" << b << "=" << sum << endl;

}

void divison(int a, int b)
{
  int sum = a / b;
  cout << a << "/" << b << "=" << sum << endl;

}
int main() {
  
  int num1; 
  int num2;
  int input;
  
  
  cout << "Enter a number:\n";
  cin >> num1;

  cout << "Enter another number:\n";
  cin >> num2;

  cout << "Enter 1 to add, 2 to subtract, 3 to multiply, or 4 to divide:\n";
  cin >> input;

  if (input == 1)
  {
     add(num1, num2);
    //cout << num1 << " added by" << num2 <<  "is" << add(num1,num2);
  }

  if (input == 2)
  {
    sub(num1, num2);
    //cout << num1 <<"subtracted by" << num2 << "is" << sub(num1,num2);
  }

  if (input == 3)
  {
    mul(num1, num2);
    //cout << num1 <<"multipled by" << num2 << "is" << mul(num1,num2);
  }

  if (input ==4)
  {
    divison(num1, num2);
    //cout << num1 <<"divided by" << num2 << "is" << divison(num1, num2);
  }
 

    


}