
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
		printf("������ֵ��");
		scanf("%d",&i);
		if(i<50||i>100)
		  printf("ֵ������50~100֮�䣬���������룺");
		else
		  printf("����һ�������ڵڶ���������1������һ����С�ڵڶ���������0"); 
		  scanf("%d",&x);
		  if(x==1&&a>b||x==0&&a<b) m=i+m;
		  else if(x==1&&a<b||x==0&&a>b) m=m-i; 
	}
	    printf("��ʣ��ĳ���Ϊ%d",m);
	
	
	return 0;}
 
 
