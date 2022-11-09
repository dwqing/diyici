#include<stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	if(n>=2)
	{
		a=1;b=1;
		c=n-2;
		if(c%3==0)
		{
			a+=1;c-=1;
		}
	}
	else
	{
		a=1;b=0;c=0;
	}
	printf("%d  %d  %d",a,b,c);
	return 0;
} 
