#include <iostream>
using namespace std;

int main()
{
    int n,r,sum=0,c;
    cout<<"Enter any number: ";
    cin>>n;
    c=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==c)
    {
        cout<<c<<" is a Armstrong number";
    }
    else 
    {
        cout<<c<<" is not a armstrong number";
    }

    return 0;
}
