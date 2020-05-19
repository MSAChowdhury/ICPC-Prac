#include <iostream>
#include <conio.h>
using namespace std;
class Calculator
{
  public:
    int view(){
      char inp;
      cout << "##### CALCULATOR #####" << endl;
      cout << "press the symbol to execute the program that you want to  " << endl;
      cout << "+ = Addition " << endl;
      cout << "- = Subtraction " << endl;
      cout << "* = Multiplication " << endl;
      cout << "/ = Division " << endl;
      cout << "Input: " << endl;
      cin >> inp;
      cout << endl;
      return inp;
    }
    void Addition(float x, float y){
      float z;
      z = x + y;
      cout << x << " + " << y << " = " << z<<endl;
    }
    void Subtraction(float x, float y){
      float z;
      z = x - y;
      cout << x << " - " << y << " = " << z<<endl;
    }
    void Multiplication(float x, float y){
      float z;
      z = x * y;
      cout << x << " * " << y << " = " << z<<endl;
    }
    void Division(float x, float y){
      float z;
      if(y == 0.00)
      {
        cout <<"A divisor can't be ZERO"<<endl;
      }
      else{
        z = x / y;
        cout << x << " / " << y << " = " << z<<endl;
      }

    }

};

int main()
{

char func;


Calculator key;

func = key.view();


    while(func != 'e')
    {
      if(func == '+' )
      {
        float x, y;
        cout << "** ADDTITION **" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        key.Addition(x,y);

      }
     else if(func == '-' )
     {
       float x, y;
       cout << "** SUBSTRACTION **" << endl;
       cout << "Please enter first number: " << endl;
       cin >> x;
       cout << "Please enter second number: " << endl;
       cin >> y;
       key.Subtraction(x,y);

     }
     else if(func == '*' )
         {
           float x, y;
          cout << "**MULTIPLICATION**" << endl;
          cout << "Please enter first number: " << endl;
          cin >> x;
          cout << "Please enter second number: " << endl;
          cin >> y;
          key.Multiplication(x,y);

         }
     else if(func == '/' )
         {
           float x, y;
          cout << "**DIVISION**" << endl;
          cout << "Please enter first number: " << endl;
          cin >> x;
          cout << "Please enter second number: " << endl;
          cin >> y;
          key.Division(x,y);

      }
      else
      {
          cout<<"Invalid choice"<<endl<<endl;

      }
      func = key.view();
    }
      cout << "Thanks for using!" << '\n';
    return 0;

}
