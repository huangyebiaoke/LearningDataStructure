#include<stdlib.h>
typedef int ElemType;
typedef struct SNode{
    ElemType data;//存放栈中元素
    struct SNode *next;//栈顶指针
} SNode,*SLink;//链栈的结点
typedef struct LinkStack{
    SLink top;//栈顶指针
    int count;//链栈结点数
} LinkStack;//链栈
/**
 * 无栈满的情况;
 * 空栈的判定条件:top==null;
 */
bool Push(LinkStack *s,ElemType x){
    SLink p=(SLink)malloc(sizeof(SNode));
    p->data=x;//给新元素赋值
    p->next=s->top;//p的后继指针指向栈顶元素
    s->top=p;//栈顶元素指向新的元素
    s->count++;//栈中的元素+1
    return true;
}

bool Pop(LinkStack *s,ElemType &x){
    if(s->top==NULL){
        return false;
    }else{
        x=s->top->data;
        SLink p=s->top;
        s->top=s->top->next;
        free(p);
        s->count--;
        return true;
    }
}