#include <iostream>
using namespace std;
struct student
{
  char name[30], father[30], address[50];
  int birth_date, birth_month, birth_year;
  int phone;
};
student s, student[50];
int main()
{
  cout << s.name;
  cout << student[10].phone;
  return 0;
}
