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
void seclet(int a,int b)
{
	while(a>b||a<=0)
	{
		printf("输入的值不符合要求，请重新输入1~%d",b);
		scanf("%d",&a);
	}
}
int main()
{
	int n,m;
	scanf("%d",&n);scanf("%d",&m); 
	int a[n];
	seclet(n,100000);seclet(m,10);
	for(int i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	sort(a,n);
		printf("%d",a[0]);
	return 0;
} 
