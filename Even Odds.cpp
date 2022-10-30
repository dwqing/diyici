#include<bits/stdc++.h>
using namespace std;
int const mm=1000000;
int number[mm];
int main()
{
    int n,k;int m=1;
    cin>>n>>k;
    for(int i=1;i<=(n+1)/2;i++)
    {
    	number[i]=2*i-1;
	}
	for(int j=(n+1)/2+1;j<=n;j++)
	{
		number[j]=2*m;
		m++;
	}
	cout<<number[k];
	return 0;
} 
