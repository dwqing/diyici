#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	  cin>>a[i];
    }
	for(int i=1;i<=n;i++)
	{
		int ans=0;
		for(int j=1;j<i;j++)
		 if(a[i]>a[j])
		  ans++;
		cout<<ans<<" ";  		  
	  }  
	  return 0;

}
