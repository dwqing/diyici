#include<stdio.h>
#include<stdlib.h>
int scr_length(char v[])
{
	int len=0;
	while(v[len])
	 len++;
	return len;
}
int int_length(int v[])
{
	int len;
	len=sizeof(v)/sizeof(v[0]);
	return len;
}
void T(char v[],int n,int a0,int time,int c)
{
	char a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=v[i];
	}
	for(int i=0;i<c;i++)
	{
		int k=0; 
		for(int j=0;j<(time-a0-1);j++)
		{
			v[a0-1+j+k]=a[a0+1+j];
		}
		k=k+time-a0-1;
	}
	int p,f=0; p=c*(time-a0-1);
	for(int i=time+1;i<n;i++)
	{
		v[a0-1+p+f]=a[i];
		f++;
	}
}
void code(char v[])
{
	int n,m;int k=0,t=0;
	int a[100],b[100],c;
	n=scr_length(v);
	for(int i=0;i<n;i++)
	{
		if(v[i]=='[')
		{
			a[k]=i;
			c=atoi(v);
			k++;
		}
		if(v[i]==']')
		{
			b[t]=i;
			t++;
		}
	}
	m=int_length(a);
	a[m]=n+10;
	int time=0;
	for(int j=0;j<m;j++)
	{
		if(b[j]<a[j+1]) time=b[j];break;//找到一组对应的[]然后剩下的是解码的过程
		                                  //考虑到之前的字符串会转移会导致字符串的损失，所以考虑选择字符串的 
	}     
	T(v,n,a[0],time,c);                                //林一个字符串组进行储存和取值 
}
int main()
{
	char name[128];
	scanf("%s",name);
	int t=0;
	do{
		int n;
		n=scr_length(name);
		for(int i=0;i<n;i++)
		{
			if(name[i]=='[')
			code(name);
			else t=1;
		}
	}while(t=0);
	puts(name);
	return 0;
}
