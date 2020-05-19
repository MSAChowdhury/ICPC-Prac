#include <iostream>

using namespace std;
#define MAX 20
class student
{
  private:
      char  name[30], sec[10];
      int   rollNo;
      int   total;
      float perc;
  public:

      void getDetails(void);

      void putDetails(void);

      void GradeCalculator(void);
};
void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter Section: ";
    cin >> sec;
    cout << "Enter the Percentage: " ;
    cin >> perc;

}
void student::putDetails(void){
    cout << "Student details:\n";
    cout << "Name: "<< name <<'\n'<< "Roll Number: " << rollNo <<'\n'<< "Section: " << sec <<'\n'<< "Percentage: " << perc<<'\n';
}
void student::GradeCalculator(){
  if(perc >= 90.0)
      {
      	cout << "Grade: A+\n";
        cout << "Point: 4.00\n";
  	}
  	else if(perc >= 85.0)
      {
        cout << "Grade: A\n";
        cout << "Point: 3.75\n";
  	}
  	else if(perc >= 80.0)
      {
        cout << "Grade: B+\n";
        cout << "Point: 3.50\n";;
  	}
  	else if(perc >= 75.0)
      {
        cout << "Grade: B\n";
        cout << "Point: 3.25\n";
  	}
  	else if(perc >= 70.0)
      {
        cout << "Grade: C+\n";
        cout << "Point: 3.00\n";
  	}
    else if(perc >= 65.0)
      {
        cout << "Grade: C\n";
        cout << "Point: 2.75\n";
  	}
    else if(perc >= 60.0)
      {
        cout << "Grade: D+\n";
        cout << "Point: 2.50\n";
  	}
    else if(perc >= 50.0)
      {
        cout << "Grade: D\n";
        cout << "Point: 2.25\n";
  	}
  	else
      {
      	cout << "FAIL\n";
  	}

}
int main()
{
  student std[MAX];
  int n,loop;

      cout << "Enter total number of students: ";
      cin >> n;

      for(loop=0;loop< n; loop++){
          cout << "Enter details of student " << loop+1 << ":\n";
          std[loop].getDetails();
      }

      cout << endl;

      for(loop=0;loop< n; loop++){
          cout << "Details of student " << (loop+1) << ":\n";
          std[loop].putDetails();
          cout << "Grading of Student " << (loop+1) << ":\n";
          std[loop].GradeCalculator();
      }


  return 0;
}
