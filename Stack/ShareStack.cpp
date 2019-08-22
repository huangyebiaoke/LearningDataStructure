#define MaxSize 100
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int top1;
    int top2;
} SqDoubleStack;

bool Push(SqDoubleStack &s,ElemType x,int stackNum){
    if (s.top1+1==s.top2){
        return false;
    }else{
        if(stackNum==1){
            s.data[++s.top1]=x;
        }else if (stackNum==2){
            s.data[--s.top2]=x;
        }
        return true;
    }
}

bool Pop(SqDoubleStack &s,ElemType &x,int stackNum){
    if (s.top1==-1||s.top2==MaxSize){
        return false;
    }else{
        if(stackNum==1){
            x=s.data[s.top1--];
        }else if (stackNum==2){
            x=s.data[s.top2++];
        }
        return true;
    }
}