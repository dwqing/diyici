#include<stdio.h>
#include<math.h>
int math_n(int n)
{
	double x1=1,x2=1,sum;
	for(int i=1;i<=n;i++)
	{
		x1=x1*(1+sqrt(5))/2;
	}
		for(int i=1;i<=n;i++)
	{
		x2=x2*(1-sqrt(5))/2;
	}
	sum=(x1-x2)/sqrt(5);
	return sum;
}
int main()
{
	unsigned int n;
	scanf("%u",&n);
	while(n>48&&n==0)
	{
		printf("请输入1~48的自然数");
		scanf("%u",&n);
	}
	double Fn;
	Fn=math_n(n);
	printf("%.2f",Fn);
	return 0;
}
