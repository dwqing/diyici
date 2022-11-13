#include<stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include<stdlib.h>

//����ṹ��
typedef struct Linklist{
    int score;//����������
    struct Linklist *next;//����ָ����
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
    printf("������Ҫ�����Ľڵ������\n");
    scanf("%d",&n);
    head = Linklistcreate(n);
    printf(head);
    while (true){
        printf("��ѡ��Ҫִ�еĲ�����\n");
        printf("1.����ڵ�\n2.ɾ���ڵ�\n3.�޸Ľڵ�\n4.�˳�\n");
        scanf("%c",&c);
        if(c =='1'){
            printf("����Ҫ���Ĳ���ڵ㣺\n");
            scanf("%c",&in);
            insert(head,in);
            printf(head);
            output(head,n);
        }else if(c == '2'){
            printf("����Ҫɾ���ĸ��ڵ�����ݣ�\n");
            scanf("%d",&x);
            delete1(head,x);
            printf(head);
        }else if(c =='3'){
            printf("����Ҫ�޸��ĸ��ڵ�����ݣ�\n");
            scanf("%d",&y);
            change(head,y);
            printf(head);
        }else if(c =='4'){
            exit(0);
        }
    }
}

//��ʼ��һ������ nΪ����ڵ����
Linklist *Linklistcreate(int n){
    Linklist *head,*node,*end;//����ͷ�ڵ㣬��ͨ�ڵ㣬β���ڵ㣻
    head = (Linklist*)malloc(sizeof(Linklist));//�����ַ
    end = head;//���ǿ�������ͷβ�ڵ�һ��
    for(int i =0;i<n;i++){
        node = (Linklist*) malloc(sizeof(Linklist));
        scanf("%d",&node->score);
        end->next = node;
        end=node;
    }
    end->next=NULL;//��������
    return head;
}

//����ڵ�
//����ڵ�����ò���ǰ�ڵ��ָ���������ϲ���ڵ���������ٰѲ���ڵ��ָ���������ϲ����ڵ��������
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
        puts("������Ҫ�����ֵ��");
        scanf("%d",&in->score);
        in->next=t->next;//���in�ڵ��ָ����Ҳ����˵��in��ָ����ָ��t����һ���ڵ�
        t->next=in;//���t�ڵ��ָ���򣬰�t��ָ��������ָ��in
    }
    else{
        puts("�ڵ㲻����");
    }
}

//ɾ������ڵ�
//ɾ�������Ԫ��Ҳ���ǰ�ǰ�ڵ��ָ����Խ��Ҫɾ���Ľڵ�ָ�����¸��ڵ㡣
// ����p->next = q->next;Ȼ��ų�q�ڵ�Ŀռ䣬��free(q);

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
        puts("�ڵ㲻����");
    }
}

//�޸�����ڵ�ֵ
void change(Linklist *list,int n){
    Linklist *t = list;
    int i = 0;
    while (i<n&&t!=NULL){
        t = t->next;
        i++;
    }
    if(t!=NULL){
        puts("����Ҫ�޸ĵ�ֵ��");
        scanf("%d",&t->score);
    }
    else{
        puts("�ڵ㲻����");
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

