#include <iostream>

using namespace std;

int BtoD(int n)
{
    int ans=0,x=1;
    while(n>0){
        int y=n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
        
    }
    return(ans);
}


int main()
{
    int n,sum=0;
    cout<<"enter the Binary number"<<endl;
    cin>>n;

cout<<"Decimal Equivalent is "<<BtoD(n)<<endl;  // call of the function binary to Decimal

}