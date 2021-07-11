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
     
     cout<<"Subarray elements of array "<<endl;
     for(int i=0;i<n;i++)
     {
       for(int j=i;j<n;j++)
     {
       for(int k=i;k<j;k++)
     {
         cout<<a[k]<<" ";
     }
         cout<<endl;
      
     }  
     }
    return 0;
}
