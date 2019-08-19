// 单链表
#include<stdlib.h>
#include<stdio.h>
typedef int DataType;
typedef struct LNode{
    DataType data;
    struct LNode *next;
}LNode,*LinkList;
/*
 * 头结点和头指针
 * 不管带不带头结点,头指针始终指向链表的第一个节点,而头结点是带头结点链表中的第一个节点,节点内通常不存储信息,他是为了方便做的一种处理;
 */

/**
 * 头插法
 * 先读入的数据在表头
 */
LinkList Create(LinkList &L){
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;
    LNode *s;
    int x;
    scanf("%d",&x);
    while(x!=-1){
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",&x);
    }
}
/**
 * 尾插法
 * 读入的数据和表的数据的顺序是一致的
 */
LinkList Create2(LinkList &L){
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;
    // r为表尾指针,指向表尾
    LNode *s,*r=L;
    int x;
    scanf("%d",&x);
    while(x!=-1){
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        r->next=s;
        // r指向新的表尾结点
        r=s;
        scanf("%d",&x);
    }
    r->next=NULL;
    return L;
}

/**
 * 按序号查找节点
 * 在单链表中从第一个节点出发,顺着指针域next逐个往下查找,直到找到第i个节点为止,否则返回最后一个结点指针域NULL
 */ 

LNode *GetData(LinkList L,int i){
    if(i==0) return L;
    // 如果i为负数
    if(i<1) return NULL;
    // 第一个结点指针赋值给p
    LNode *p=L->next;
    // 计数
    int j=1;
    while(p&&j<i){
        p=p->next;
        j++;
    }
    return p;
}

/**
 * 按值查找结点
 */
LNode *LocateData(LinkList L,DataType d){
    LNode *p=L->next;
    while (p!=NULL&&p->data!=d){
        p=p->next;
    }
    return p;
}
