#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#include<stdlib.h>
typedef struct Linklist
{
	int score;
	struct Linklist *next;
}Linklist;
Linklist *Linklistcreate(int n);
void insert(Linklist *head,int n);
void delete1(Linklist *head,int n);
void change(Linklist *head,int n);
void output(Linklist *head,int n);
int main()
{
	int n,in,x,y;
	char c;
	struct Linklist *head =NULL;
	printf("������Ҫ�����Ľڵ������\n");
	scanf("%d",n);
	head=Linklistcreate(n);
	printf(head);
	while(true)
	{
		printf("��ѡ��Ҫִ�еĲ�����\n");
		printf("1.����ڵ�\n.2.ɾ���ڵ�\n.3.�޸Ľڵ�\n.4.�˳�\n");
		scanf("%c",&c);
		if(c=='1')
		{
			printf("�������������ڵ㣺\n");
			scanf("%d",&in);
			insert(head,in);
			printf(head);
			output(head,n);
		}
		else if(c=='2') 
		{
			printf("����Ҫɾ���ĸ��ڵ�");
			scanf("%d",&x);
			delete1(head,x);
			printf(head); 
		}
		else if(c=='3')
		{
			printf("����Ҫ�޸��ĸ��ڵ�");
			scanf("%d",&y);
			change(head,y);
			printf(head); 
		}
		else if(c=='4');
		exit(0);
	}
}
Linklist *Linklistcreate(int n)
{
	Linklist *head, *node, *end;
	head = (Linklist*)malloc(sizeof(Linklist));
	end=head;
	for(int i=0;i<n;i++)
	{
		node = (Linklist*)malloc(sizeof(Linklist));
		scanf("%d",&node->score);
		end->next= node;
		end=node; 
	}
	end->next=NULL;
	return head;
}

void insert(Linklist *list,int n)
{
	Linklist *t=list,*in;
	int i=0;
	while(i<n&&t!=NULL)
	{
		t=t->next;
		i++;
	}
	if(t!=NULL)
	{
		in = (Linklist*)malloc(sizeof(Linklist));
		puts("��������Ҫ�����ֵ");
		scanf("%d",in->score);
		in->next=t->next;
		t->next=in; 
	}
	else
	{
		puts("�ڵ㲻����");
	}
}
void delete1(Linklist *list,int n)
{
	Linklist *t =list,*in;
	int i=0;
	while(i<n&&t!=NULL)
	{
		in=t;
		t=t->next;
		i++;
	}
	if(t!=NULL)
	{
		in->next=t->next;
		free(t);
	}
	else
	{
		puts("�ڵ㲻����");
	}
}
void change(Linklist *list,int n)
{
	Linklist *t=list;
	int i=0;
	while(i<n&&t!=NULL)
	{
		t=t->next;
		i++;
	}
	if(t!=NULL)
	{
		puts("��Ҫ�޸ĵ�ֵ");
		scanf("%d",&t->score);
	}
	else
	{
		puts("�ڵ㲻����");
	}
 } 
 void output(Linklist *head,int n)
 {
 	Linklist *h=head;
 	int i=0;
 	while(h!=NULL)
 	{
 		h=h->next;
 		printf("%d",h->score);
	 }
 }
