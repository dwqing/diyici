#include<stdio.h>
int main()
{
	unsigned int n;
	long long a[50];
	a[0]=1;a[1]=1;
	scanf("%u",&n);
	while(n>48)
	{
		printf("请输入1~48的自然数");
		scanf("%u",&n);
	}
	
	if(n==0) printf("%0.00"); 
	if(n==1||n==2)
	printf("1.00");
	for(int i=2;i<n;i++)
    {
    	a[i]=a[i-1]+a[i-2]; 
	}
 	 printf("%lld.00",a[n-1]);
 	 return 0;
} 
