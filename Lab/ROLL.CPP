/*Developer : Jrd and Gopal-Oswal
  Date : 25-02-2019
  Description : Use of Class
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class Student
 {
 int rollNumber;
 char name[20];
 float maths,science,english;
 float total;
 public:
	float CalculateTotal();
	void Getdata();
	void Showdata();

 };
 void Student::Getdata()
    {
    cout<<"\nEnter name\t     ";
    cin>>name;
    cout<<"Enter Roll Number    ";
    cin>>rollNumber;
    cout<<"\nEnter your marks of\n";
    cout<<"maths\t             ";
    cin>>maths;
    while((maths<0)||(maths>98))
    {
    cout<<"Invalid Number";
    cin>>maths;
    }
    cout<<"\nscience \t     ";
    cin>>science;
    while((science<0)||(science>98))
    {
    cout<<"Invalid Number";
    cin>>science;
    }
    cout<<"\nenglish  \t     ";
    cin>>english;
    while((english<0)||(english>98))
    {
    cout<<"Invalid Number";
    cin>>english;
    }
    }
 void Student::Showdata()
    {
    cout<<"\nName :         "<<name<<"\n";
    cout<<"Roll number :  "<<rollNumber;
    cout<<"\nMarks of\nEnglish        "<<english
    <<"\nscience        "<<science
    <<"\nmaths          "<<maths;
    }
 float Student::CalculateTotal()
    {
    total=english+science+maths;
    cout<<"\nTotal          "<<total;
    return (total);
    }

 int main()
 {
  Student p[3];
  clrscr();
  for(int i=0;i<3;i++)
  {
   p[i].Getdata();
   p[i].Showdata();
   p[i].CalculateTotal();
  }
  getch();
  return 0;
 }
