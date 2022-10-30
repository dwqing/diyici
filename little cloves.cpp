#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n;
	if(n%3==0)
	{
		a=b=c=n/3;
		if(a%3==0)
		{
		   a=a+2;
		   b=b-1;
		   c=c-1;
		}
	}
	cout<<a<<b<<c;
}
