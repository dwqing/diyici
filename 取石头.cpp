#include<bits/stdc++.h>
using namespace std;
const long long mmax=100000;
long long a[mmax];
long long n,sum;
int main()
{
	sum=0;
	std::ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%2==1)
	 cout<<"Alice";
	else
	 cout<<"Bob";
	return 0;
}
