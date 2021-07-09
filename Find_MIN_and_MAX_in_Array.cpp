/******************************************************************************

                              FIND MIN AND MAX IN ARRAY 

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the no. of elements for array."<<endl;
    cin>>n;
    
    int a[n];
    
     cout<<"enter the elements for array Sequencial"<<endl;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     
      cout<<"entered element is"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" "<<endl;
     }
     

int Min=a[0];
int Max=a[0];
 for(int i=1;i<n;i++)
     {
         if(Max<a[i])
         {
             Max=a[i];
            
         }
        
        if(Min>a[i])
         {
             Min=a[i];
            
         }
     }
     
     cout<<"the max no. in array is  "<<Max<<endl;
     cout<<"the min no. in array is  "<<Min<<endl;

    
    return 0;
}
