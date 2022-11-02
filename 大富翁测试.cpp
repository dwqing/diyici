#include<stdio.h>
void swap(int *a,int *b)
{
	int tem=0;
	tem=*a;
	*a=*b;
	*b=tem;
	  
}
void sort(int v[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(v[i]<v[j]) swap(&v[i],&v[j]);
		}
	}
}
int main()
{
	int a[]={2,5,10,-1};
	sort(a,4);
	for(int i=0;i<4;i++)
	{
		printf("%d",a[i]);
	 } 
	 return 0;
}
