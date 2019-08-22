#include<stdlib.h>
#include<stdio.h>
#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;
#define MaxSize 50
typedef char ElemType;
typedef struct{
    ElemType data[MaxSize];
    int top;
} SqStack;
/**
 * Top<=MaxSize;
 * empty stack:top==-1,
 * full stack:top==MaxSize-1,
 * element count:top+1;
 */
bool StackEmpty(SqStack s){
    return s.top==-1?true:false;
}

bool Push(SqStack &s,ElemType x){
    if (s.top==MaxSize-1){
        return false;
    }else{
        s.data[++s.top]=x;
        return true;
    }
}

// bool Pop(SqStack &s,ElemType &x){
//     if (s.top==-1){
//         return false;
//     }else{
//         x=s.data[s.top--];
//         return true;
//     }
// }


ElemType Pop(SqStack &s){
   return s.data[s.top--];
}

bool GetTop(SqStack &s,ElemType &x){
    if (s.top==-1){
        return false;
    }else{
        x=s.data[s.top];
        return true;
    }
}

bool Check(char *str){
    SqStack s;
    s.top=-1;

    int len=strlen(str);
    for(int i=0;i<len;i++){
        char c=str[i];
        switch (c){
        case '(':
        case '[':
            Push(s,c);
            break;
        case ')':
            if(Pop(s)!='(')
                return false;
            break;
        case ']':
            if(Pop(s)!='[')
                return false;
            break;
        }
    }
    return StackEmpty(s);
}

int main(int argc, char const *argv[]){
    char str[6]={'(','[',']','[',')',']'};
    cout<<"The result is: "<<boolalpha<<Check(str)<<endl;
    return 0;
}
