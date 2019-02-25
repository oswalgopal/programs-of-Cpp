//Developer         :- Gopal Oswal 
//Date              :- 25 Feb,2019 
//Topic             :- Storing the values in the array.

//write a program to display the minimum , maximum , sum , search and average of  elements of array.  


// output :- 
        // Value of array :- [1=vlue_1, ..........]
        // minimum value of array is []
        // maximum 
        // sum of 
        // average of
        
        
        
#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,j,sum=0,max , min ;
    float average=0;
    
    
    for(i=0;i<10;i++)
    {
        cout<<"Enter the number for "<<i<<" position ";
        cin>>arr[i];
    }
    
    
    for(j=0;j<10;j++)
    {
        sum+=arr[j];       // sum done 
    }
    
    average =  sum / 5.0;   // average done 
    
    
    // maximum and minimum 
    
    for(i=0;i<10;i++)
    {
        if(i==0)
             {
                 max=arr[i];
                 min=arr[i];
             }
             
        if(max<arr[i])
        {
            max=arr[i];
        }
        
        if(min>arr[i])
        {
            min=arr[i];
        }
    }        
        //searching of an no in that array
        
        
        

    
    //output 
    cout<<"The elements of array are "<<"\n";
    cout<<"[";
    for(i=0;i<10;i++)
    {
      cout<<"["<<i <<" = "<<arr[i]<<"]";    
    }
    cout<<"]";
    
    cout<<"\n";
    
    cout<<"Minimum value of the array is : "<<min;
    cout<<"\n";
    cout<<"maximum value of the array is : "<<max;
    cout<<"\n";
    cout<<"the average is : "<<average ;
    cout<<"\n";
    cout<<"the sum is : "<<sum;
    
    
    
    
    
    
   return 0 ; 
}
