#include<stdio.h>
#include<stdlib.h>
int str_length(const char v[])
{
	int len=0;
	while(v[len])
	   len++;
	return len;
}
void repet(char v[],int n)
{
	int a;
	a=str_length(v); 
	for(int i=1;i<n;i++)
	 {
	 	for(int j=0;j<a;j++)
	 	{
	 		v[j+a*i]=v[j];
		 }
	 }
}
void secel(char v[])
{
	int n,i,j,a;
	int b,d;
	n=str_length(v);
	for(i=0;i<n;i++)
	{
		if(v[i]=='[')
		{
			a=atoi(v);
			b=i;
			i=n;
		}
		
	}
	for(j=n;j>0;j--)
	{
		if(v[j]==']')
		{
			d=j;
			j=0;
		}
	}
	for(int k=0;k<d-b-1;k++)
	{
		v[k]=v[b+1+k];
	}
	v[d-b-1]={};
	repet(v,a);
}/*
int p(char v[])
{
	int i,n;
	n=str_length(v);
	for(i=0;i<n;i++)
	{
		if(v[i]==']')
		  return 0;
		else 
		  return 1;
	}

}*/
int main()
{
	char name[128];
	scanf("%s",name);
	secel(name);
	puts(name);
	return 0;
	
}
