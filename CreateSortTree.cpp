#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *rchild,*lchild;
};
typedef struct node Node;


void inorder(Node *p){
	if(p!=NULL){
		inorder(p->lchild);
		printf("%d\t",p->data);
		inorder(p->rchild);
	}
}

/*Node CreatSortTree(Node *t){
	int x,i,n;
	int flag;//enum{false,true} bool;
	Node *p,*q;
	scanf("%d",&x);
	q=(Node *)malloc(sizeof(Node));//q=new Node;
	q->lchild=NULL;
	q->rchild=NULL;
	q->data=x;
	if(t==NULL){
		t=q;
	}else{
		p=t;
		flag=1;
		do{
			if(p->data>x){
				if(p->lchild!=NULL){
					p=p->lchild;
				}else{
					p->lchild=q;
					flag=0;
				}
			}else{
				if(p->rchild!=NULL){
					p=p->rchild;
				}else{
					p->rchild=q;
					flag=0;
				}
			}
		}while(flag!=1);
	}
	return(*t);
}*/

void Create_Sort_Tree(Node **t, int value)
{
    if(*t == NULL){
        *t = (Node *)malloc(sizeof(Node));
        (*t)->data = value;
        (*t)->lchild = NULL;
        (*t)->rchild = NULL;
    }else{
        if((*t)->data > value)
            Create_Sort_Tree(&(*t)->lchild, value);
        else
            Create_Sort_Tree(&(*t)->rchild, value);    
    }
}

int main(void){
	Node *t=NULL;
	int value[] = {5,1,14,36,33,1,3};
    for(int i = 0;i < 7;i++)
        Create_Sort_Tree(&t,value[i]);
	//CreatSortTree(t);
	inorder(t);
}

