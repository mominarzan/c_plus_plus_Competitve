/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
     int n;
    cout<<"enter the no. of elements for array."<<endl;
    cin>>n;
    
    int a[n];
    
     cout<<"enter the elements for array "<<endl;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     
     int counter=1;
     while(counter<n){
         for(int i=0;i<n-counter;i++){
             if (a[i]>a[i+1]){
                 int temp = a[i];
                 a[i]=a[i+1];
                 a[i+1]=temp;
                 
             }
         }
         counter++;
     }
     
     
     cout<<"Sorted array by bubble sort is "<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     
    return 0;
}


