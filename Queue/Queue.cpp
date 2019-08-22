/**
 * 只能在一端(front)进行插入而另一端(rear)进行删除操作的线性表
 * character:FIFO(first in first out)
 */
#define MaxSize 50
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int front,rear;
} SqQueue;
/**
 * 假溢出:数组未满却无法插入
 * 解决方法:循环队列
 * 入队:rear=(rear+1)%MaxSize;
 * 出队:front=(front+1)%MaxSize;
 * 判断队空或队满:设置标志位flag,出队时flag=0,入队时flag=1,
 * 队空:flag==0&&rear=front,
 * 队满:flag==1&&rear=front;
 * 另一种方法:
 * 把front==rear仅仅作为队空的判定条件
 * 队满时牺牲一个存储空间(rear+1)%MaxSize==front;
 */
bool EnQueue(SqQueue &q,ElemType x){
    if((q.rear+1)%MaxSize==q.front){
        return false;
    }else{
        q.data[q.rear]=x;
        q.rear=(q.rear+1)%MaxSize;
        return true;
    }
}

bool DeQueue(SqQueue &q,ElemType &x){
    if(q.rear==q.front){
        return false;
    }else{
        x=q.data[q.front];
        q.front=(q.front+1)%MaxSize;
        return true;
    }
}

