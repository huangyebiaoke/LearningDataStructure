typedef int ElemType;
typedef struct{
    ElemType data;
    struct LinkNode *next;
} LinkNode;//链式队列结点
typedef struct{
    LinkNode *front,*rear;
} LinkQueue;