#include <stdio.h>
#include <stdlib.h>

typedef struct BiTree{
    int item;
    struct BiTree *lchild,*rchild;
}BiTree;

void Create_Sort_Tree(BiTree **t, int value)
{
    if(*t == NULL){
        *t = (BiTree *)malloc(sizeof(BiTree));
        (*t)->item = value;
        (*t)->lchild = NULL;
        (*t)->rchild = NULL;
    }
    else{
        if((*t)->item > value)
            Create_Sort_Tree(&(*t)->lchild, value);
        else
            Create_Sort_Tree(&(*t)->rchild, value);    
    }
}

void lar(BiTree *t)
{
    if(t == NULL)
        return;
    else{
        lar(t->lchild);
        printf("%d\t",t->item);
        lar(t->rchild);
    }
        
}

int main(void)
{
    int i;
    BiTree *t = NULL;
    int value[] = {5,8,14,36,21,1,3};
    for(i = 0;i < 7;i++)
        Create_Sort_Tree(&t,value[i]);    
    lar(t);
    printf("\n");
}
