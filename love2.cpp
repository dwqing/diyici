
#include <iostream>
using namespace std;
int n,a,b,c;
int main()
{
    cin>>n;
    if (n>=2)
    {
        a=1;
        b=1;
        c=n-2;
        if (c%3==0)
        {
            c-=1;
            a+=1;
        }
    }
    else
    {
        a=1;
        b=0;
        c=0;
    }
    cout<<a<<" "<<b<<" "<<c;
}
