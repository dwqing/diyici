#include<bits/stdc++.h>
using namespace std;
int main()

{   int t;
	cin>>t;
	int ans=0;
	for(int i=t;i>=1;--i)
	{
		for(int j=1;j<=i;j++)
		{
			++ans;
			if(ans<10)
			 cout<<0<<ans;
			else
			 cout<<ans; 
		}
		cout<<endl;
	}
	return 0;

	
}
