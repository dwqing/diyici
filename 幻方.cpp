#include<bits/stdc++.h>
using namespace std;
const int mmax=50;
int a[mmax][mmax];
int n;
int main()
{
	std::ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	int x=1,y=n/2+1;
	int p=1;
	while(p<=n*n)
	{
		a[x][y]=p;
		if(x==1&&y!=n)
		{
			y++;x=n;
		}
		else if(y==n&&x!=1)
		{
			y=1;x--;
		}
		else if(x==1&&y==n)
		{
			x++;
		}
		else
		{
			if(a[x-1][y+1]>0)
			{
				x++;
			}
			else
			{
				x=x-1;y=y+1;
			}
		}
		p++;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl; 
	}
	return 0;
}
