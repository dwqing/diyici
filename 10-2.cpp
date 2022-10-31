#include<stdio.h>
void decrement_date(int *y,int *m,int *d)
{
	if(*d!=1)
	*d=*d-1;
	else
	{
		if(*m==1)
		 {
		 	*y=*y-1;
		 	*m=12;
		 	*d=31;
		 }
		else if(*m!=1&&*m==7||*m==10||*m==12)
		{
			*m=*m-1;
			*d=30;
		}
		else if(*m!=1&&*m==3)
		{
			*m=2;
			if(*y%4==0)
			{
				*d=29;
			}
			else 
			{
				*d=28;
			}
		}
		else
		{
			*m=*m-1;
			*d=31;
		}
		 
	}
}
void increment_date(int *y,int *m,int *d)
{
	if(*d<=27)
	 *d=*d+1;
	else if(*d==28)
	{
		if(*m==2&&*y%4!=0)
		 {
		 	*d=1;
		 	*m++;
		 }
		 else *d++;
	}
	else if(*d==29)
	{
		if(*m==2&&*y%4==0)
		 {
		 	*d=1;
		 	*m++;
		 }
		 else *d=*d++; 
		  
	}
	else if(*d==30)
	{
		if(*m==4||*d==6||*d==9||*d==11)
		{
			*d=1;
			*m=*m+1;
		}
		else *d=*d+1;
	}
	else if(*d==31)
	{
		if(*m==12)
		{
			*y=*y+1;
			*m=1;*d=1;
		}
		else 
		{
			*m=*m+1;
			*d=1;
		}
	}
}
int main()
{
	int y,m,d;
	printf("年：");scanf("%d",&y); 
	printf("月：");scanf("%d",&m); 
	printf("日：");scanf("%d",&d);
	decrement_date(&y,&m,&d);
	printf("该日期的前一天为%d年%d月%d日",y,m,d); 
	increment_date(&y,&m,&d);increment_date(&y,&m,&d);
	printf("该日期的后一天为%d年%d月%d日",y,m,d); 
} 
