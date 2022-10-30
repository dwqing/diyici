#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,ans;
	ans=0;
	cin>>a>>b;
	switch(a>=60,b>=60)
	{
		case 1:puts("2654946"); break;
		case 0:puts("659564"); break;
		default :puts("5464"); break;
	}
}

