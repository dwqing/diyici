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
	printf("请输入要创建的节点个数：\n");
	scanf("%d",n);
	head=Linklistcreate(n);
	printf(head);
	while(true)
	{
		printf("请选择要执行的操作：\n");
		printf("1.插入节点\n.2.删除节点\n.3.修改节点\n.4.退出\n");
		scanf("%c",&c);
		if(c=='1')
		{
			printf("你想在哪里插入节点：\n");
			scanf("%d",&in);
			insert(head,in);
			printf(head);
			output(head,n);
		}
		else if(c=='2') 
		{
			printf("你想要删除哪个节点");
			scanf("%d",&x);
			delete1(head,x);
			printf(head); 
		}
		else if(c=='3')
		{
			printf("你先要修改哪个节点");
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
		puts("请输入想要插入的值");
		scanf("%d",in->score);
		in->next=t->next;
		t->next=in; 
	}
	else
	{
		puts("节点不存在");
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
		puts("节点不存在");
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
		puts("想要修改的值");
		scanf("%d",&t->score);
	}
	else
	{
		puts("节点不存在");
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
