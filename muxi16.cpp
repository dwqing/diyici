#include<stdio.h>
int scr_length(char v[])
{
	int len=0;
	while(v[len])
	{
		len++;
	}
	return len;
}
int mian()
{
	char w[]={'a','e','i','o','u'};
    int q[]={0,0,0,0,0};
	int n;
	scanf("%d",n);
	char input[n][100];
	for(int k=0;k<n;k++)
	
	{
		scanf("%s",input[k][100]);
	}
	for(int k=0;k<n;k++)
	{
		int s=src_length(input);
		for(int j=0;j<s;j++)
		{
			if(input=='a') q[0]++;
			if(input=='e') q[1]++;
			if(input=='i') q[2]++;
			if(input=='o') q[3]++;
			if(input=='u') q[4]++;
		}
		for(int m=0;m<5;m++)
		{
			printf("%c:%d\n",w[m],q[m]);
		}
		putchar('\n');
	 } 
	 return 0;
	
}
