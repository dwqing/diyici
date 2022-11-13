#include<stdio.h>
int main()
{
	int n;
	char a[100];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=1;j<=n;j++)
	{
		printf("%c",a[j]);
	}
	
	return 0;
}
