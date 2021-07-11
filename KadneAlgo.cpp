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
     
     int C_sum =0;
     int M_sum = -999999;
     
     for(int i=0;i<n;i++){
         C_sum+=a[i];
         if(C_sum<0){
             C_sum=0;
             
         }
         M_sum=max(M_sum,C_sum);
     }
     cout<<M_sum<<endl;
    return 0;
}
