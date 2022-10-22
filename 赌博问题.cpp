
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a=0;int b=0;
	srand((unsigned int)time(NULL));
	a=rand()%100;
	b=rand()%100;
	
	int m=100;int i=12;int x;
	
	
while (i<49||i>100||m>50){
		printf("请输入值：");
		scanf("%d",&i);
		if(i<50||i>100)
		  printf("值必须在50~100之间，请重新输入：");
		else
		  printf("若第一个数大于第二个数输入1，若第一个数小于第二个数输入0"); 
		  scanf("%d",&x);
		  if(x==1&&a>b||x==0&&a<b) m=i+m;
		  else if(x==1&&a<b||x==0&&a>b) m=m-i; 
	}
	    printf("你剩余的筹码为%d",m);
	
	
	return 0;}
 
 
