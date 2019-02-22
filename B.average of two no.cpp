#include<iostream>
using namespace std;
int main(){
    int no_1,no_2,sum;                                        //taken two variables for no and one for the sum
    float average;                                           //the average can be in decimal type so taken in float type
    cout<<"enter a no";                                     //instruction for the input of the first no 
    cin>>no_1;                                             //taking the input from the user using cin object
    cout<<"enter another no";                             //instruction for the input of the second no
    cin>>no_2;                                           //taking the input from the second no 
    sum=no_1+no_2;                                      //performing the sum operation using + symbol
    average=sum/2.0;                                   //performing the divison of sum by 2 to get the average of the two no
    cout<<"the sum of the given no is "<<sum<<"\n";   //printing the sum of the two no   
    cout<<"average of the given no is "<<average;    //printing the average of the two no
    return 0;
}


// >> :- it is an input statement which causes the program to wait for the uesr to type in a input. It is also known as extraction or get from operator.
