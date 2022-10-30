#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[55];
	int n;
	cin>>n;
	while(n>50||n<1)
	{
		cout<<"ÇëÊäÈë1~50£»";
		cin>>n;
	}
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		 cout<<"pb wins";
		else
		 cout<<"zs wins";
		cout<<endl;
	}
	return 0;
}

