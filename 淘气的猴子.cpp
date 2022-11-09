#include<stdio.h>
#include<math.h>
void limition(int a,int b)
{
	while(a>b||a<=0)
	{
		printf("你输入的%d不在1~%d之间，请重新输入",a,b);
		scanf("%d",&a);
	}
}
int main()
{
	int n,m;
	scanf("%d",&n); scanf("%d",&m);
	limition(n,1000); limition(m,200);
	int v[n];
	int a[m],b[m],c[m];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
	}
	for(int j=m-1;j>=0;j--)
	{
		scanf("%d",&a[j]);scanf("%d",&b[j]);scanf("%d",&c[j]);
	}
	for(int k=0;k<m;k++)
	{
        if(b[k]==c[k])
        {
        	if(a[k]==1) v[b[k]-1]=v[b[k]-1]/2;
        	if(a[k]==2) v[b[k]-1]=sqrt(v[b[k]-1]);
		}
		else
		{
			if(a[k]==1) v[b[k]-1]-=v[c[k]-1];
			if(a[k]==2) v[b[k]-1]/=v[c[k]-1];
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",v[i]); 
	}
	return 0;
}
