#include<bits/stdc++.h>
using namespace std;
int mmax(int a,int b)
{
	if(a>b)
	 return a;
	else 
	 return b;
}
int main()
{
	int a[100];
	int n;
	int m;
	int one=0,two=0,three=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		while(a[i]>3||a[i]<1)
		{
			cout<<"ÇëÊäÈë1~3µÄÊý£»";
			cin>>a[i];	
		}
		if(a[i]%2==0)
		 two++;
		else if(a[i]%3==0)
		 three++;
		else
		 one++;
	}
	m=mmax(one,mmax(three,two));
	printf("%d",one+three+two-m);
	return 0;	
}
