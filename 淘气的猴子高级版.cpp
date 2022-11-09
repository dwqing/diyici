#include<bits/stdc++.h>
#define N 1010
using namespace std;

int a[N];
struct rec
{
	int k,x,y;
};rec z[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	  cin>>a[i];
	for(int i=m;i>=1;i--)
	{
		cin>>z[i].k>>z[i].x>>z[i].y;
	}
	for(int i=1;i<=m;i++)
	{
		if(z[i].x==z[i].y)
		{
			if(z[i].k==1) a[z[i].x]=a[z[i].x]/2;
			if(z[i].k==2) a[z[i].x]=sqrt(a[z[i].k]);
		}
		else
		{
			if(z[i].k==1) a[z[i].x]-=a[z[i].y];
			if(z[i].k==2) a[z[i].x]/=a[z[i].y];
		}
	}
	for(int i=i;i<=n;i++)
	cout<<a[i]<<"  ";
	cout<<endl;
	return 0;
}
