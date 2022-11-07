#include<stdio.h>
void s(long a,long b,long c)
{
	if(a+b>c) printf("true");
	else printf("false");
}
int main()
{
	int T;
	int tem=1;
	scanf("%d",&T);
	long a[T],b[T],c[T];
	for(int i=0;i<T;i++)
	{
		scanf("%d",&a[i]);scanf("%d",&b[i]);scanf("%d",&c[i]);
	}
	for(int j=0;j<T;j++)
	{
		printf("case%d:",tem);s(a[j],b[j],c[j]);putchar('\n');
		tem++;
	}
	return 0;
}
