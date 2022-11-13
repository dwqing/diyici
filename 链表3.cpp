#include<stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include<stdlib.h>

//定义结构体
typedef struct Linklist{
    int score;//定义数据域
    struct Linklist *next;//定义指针域
}Linklist;

Linklist *Linklistcreate(int n);
void insert( Linklist *head,int n);
void delete1(Linklist *head,int n);
void change(Linklist *head,int n);
void output(Linklist *head,int n);

int main(){
    int n,in,x,y;
    char c;
    struct Linklist *head  =NULL;
    printf("请输入要创建的节点个数：\n");
    scanf("%d",&n);
    head = Linklistcreate(n);
    printf(head);
    while (true){
        printf("请选择要执行的操作：\n");
        printf("1.插入节点\n2.删除节点\n3.修改节点\n4.退出\n");
        scanf("%c",&c);
        if(c =='1'){
            printf("你想要在哪插入节点：\n");
            scanf("%c",&in);
            insert(head,in);
            printf(head);
            output(head,n);
        }else if(c == '2'){
            printf("你想要删除哪个节点的数据：\n");
            scanf("%d",&x);
            delete1(head,x);
            printf(head);
        }else if(c =='3'){
            printf("你想要修改哪个节点的数据：\n");
            scanf("%d",&y);
            change(head,y);
            printf(head);
        }else if(c =='4'){
            exit(0);
        }
    }
}

//初始化一个链表 n为链表节点个数
Linklist *Linklistcreate(int n){
    Linklist *head,*node,*end;//定义头节点，普通节点，尾部节点；
    head = (Linklist*)malloc(sizeof(Linklist));//分配地址
    end = head;//若是空链表，则头尾节点一样
    for(int i =0;i<n;i++){
        node = (Linklist*) malloc(sizeof(Linklist));
        scanf("%d",&node->score);
        end->next = node;
        end=node;
    }
    end->next=NULL;//结束创建
    return head;
}

//插入节点
//插入节点就是用插入前节点的指针域链接上插入节点的数据域，再把插入节点的指针域链接上插入后节点的数据域。
//e->next = head->next;  head->next = e
void insert(Linklist *list,int n){
    Linklist *t=list,*in;
    int i =0;
    while(i<n&&t!=NULL){
        t = t->next;
        i++;
    }
    if(t!=NULL){
        in = (Linklist*) malloc(sizeof(Linklist));
        puts("请输入要插入的值：");
        scanf("%d",&in->score);
        in->next=t->next;//填充in节点的指针域，也就是说把in的指针域指向t的下一个节点
        t->next=in;//填充t节点的指针域，把t的指针域重新指向in
    }
    else{
        puts("节点不存在");
    }
}

//删除链表节点
//删除链表的元素也就是把前节点的指针域越过要删除的节点指向下下个节点。
// 即：p->next = q->next;然后放出q节点的空间，即free(q);

void delete1(Linklist *list,int n){
    Linklist  *t = list,*in;
    int i =0;
    while(i<n && t != NULL){
        in = t;
        t = t->next;
        i++;
    }
    if(t != NULL){
        in->next= t->next;
        free(t);
    }
    else{
        puts("节点不存在");
    }
}

//修改链表节点值
void change(Linklist *list,int n){
    Linklist *t = list;
    int i = 0;
    while (i<n&&t!=NULL){
        t = t->next;
        i++;
    }
    if(t!=NULL){
        puts("输入要修改的值：");
        scanf("%d",&t->score);
    }
    else{
        puts("节点不存在");
    }
}


void output(Linklist *head,int n){
    Linklist *h = head;
    int i =0;

    while (h != NULL){
        h =h->next;
        printf("%d",h->score);
    }
}

