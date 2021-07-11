/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
     int n,m;
    cout<<"enter the no. of rows for 2D-array."<<endl;
    cin>>n;
    cout<<"enter the no. of columm for 2D-array."<<endl;
    cin>>m;
    
    
    int a[n][m];
    
     cout<<"enter the elements for 2D-array "<<endl;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=m;j++)
     {
         cin>>a[i][j];
     }
     }
     
     cout<<"2D-array is "<<endl;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=m;j++)
     {
         cout<<a[i][j]<<" ";
     }
     cout<<endl;
     }
    
    return 0;
}
