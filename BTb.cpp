#include <iostream>
using namespace std;

int main()
{  
    int a,b;
    cin>>a;
    for(int i=31;i>=0;i--)
    {
        b=(a>>i)&1;
        cout<<b;
    }
}