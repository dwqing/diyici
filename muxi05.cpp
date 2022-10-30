#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"½ð×ÖËþÓÐ¼¸²ã£»";
	cin>>n;
	for(int k=1;k<=n;k++)
	{
	
	 for(int i=(k-1);i>=1;i--)
	 {
		cout<<" ";
	 }
	 for(int j=1;j<=(2*(n-k+1)-1);j++)
	 {
		cout<<k;
	 }
	 cout<<endl;
}
}


