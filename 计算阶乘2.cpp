#include<bits/stdc++.h>
using namespace std;
int fan(int m)
{
  if(m!=0)
    return m*fan(m-1);
  else
    return 1;
}
int main()
{
  int n,sum;
  cin>>n;
  sum=fan(n);
  cout<<sum;
  return 0;
}
