#include<bits/stdc++.h>
using namespace std;
int main() 
{
	for(int i=2;i<=100;i++)
	{
		for(int j=2;j<=i;j++)
		{
			if(i%j==0&&i==j)
			{
				cout<<i<<" ";
				break; 
			}
			else if(i%j==0&&i!=j)
			    break;
		}
	}
	return 0;
}
