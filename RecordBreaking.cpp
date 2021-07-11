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
     
     int ans=0,mx=-1;
     for(int i=0;i<n;i++){
         if(a[i]>mx && a[i]>a[i+1]){
             ans++;
         }
         mx=max(mx,a[i]);
     }
     
     cout<<ans<<endl;
     
    return 0;
}
