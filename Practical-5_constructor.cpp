#include<iostream>
#include<string>
using namespace std;

class Student
{
  private:
    int rollNumber;
    string name;
    string course;

  public:
    //constructor
    Student(int rollNumber,string name,string course)
{
this->rollNumber=rollNumber;
this->name=name;
this->course=course;
}
//Display student details
void displayDetails()
{
cout<<"Student Details"<<endl;
cout<<"Roll Number: "<<rollNumber<<endl;
cout<<"name: "<<name<<endl;
cout<<"Course: "<<course<<endl;
}
};
int main()
{
  Student s1(101,"Shardul","Computer Science");
  s1.displayDetails();
  return 0;
}

