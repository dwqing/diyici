#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n,k,t;
	k=0;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{    t=i;
		 while(t!=0)
		{
			if(t%10==x) 
			  k++;
			t=t/10;
		}
		
	}
	cout<<k;
	return 0;	
}
