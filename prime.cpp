#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter any number"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        { 
            cout<<n<<" is non prime number";
            break;
        }
    }

    if(n==i)
    {
        cout<<n<<" is prime number";
    }
    
    return 0;
}
