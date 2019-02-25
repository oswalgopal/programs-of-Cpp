
//Developer :- Gopal Oswal
//Date:- 25 feb,2019
//Topic:- Class
// Create a class with name 'Student' 




#include<iostream>
class Student {
  
  int rollNumber;
  char name[20];
  float maths,science, english;
  float total;
  
  public :
         
    float CalculateTotal();
    void GetData();
    void ShowData();
};

int main()
{   
    Obj Student p;
    p.GetData();
    p.ShowData();
    p.CalculateTotal();
    return 0;
}

void  Student::GetData()
{
    cout<<"Enter Your Roll Number ";
    cin>>rollNumber;
    cout<<"Enter your marks for Maths"
    cin>>maths ;
    cout<<"Enter your marks for science"
    cin>>science ;
    cout<<"Enter your marks for english" 
    cin>>english;
}


void Student::ShowData()
{
    cout<<"Your Roll number is"<<rollNumber;
    cout<<"\n";
    cout<<"Marks of maths is "<<maths ;
    cout<<"\n";
    cout<<"Marks of science is "<<science;
    cout<<"\n";
    cout<<"Marks of english is "<<english;
}

float Student::CalculateTotal()
{
    cout<<"\n";
    cout<<"The Total is "<<maths+science+english;
}


