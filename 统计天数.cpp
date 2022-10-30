#include<bits/stdc++.h>
using namespace std;
int da(int a,int b)
{
	if(a>b)
	return a;
	else 
	return b;
}
long long a[1000000]; 
int main()
{
	std::ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;int sum=0;int max=0;int x=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i]==a[j]) sum++;
		}
		if(sum>max)
		{
		  	max=sum;
			x=a[i];
		}
		else if(sum==max)
		{
			x=da(a[i],x);
		}
		sum=0;
		  
	}
	cout<<x;
	return 0;
}
