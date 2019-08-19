#include<stdlib.h>
typedef int DataType;
typedef struct{
    DataType *data;
    int MaxSize,length;
} SqList;
#define InitSize 100

int main(int argc, char const *argv[]){
    SqList L;
    L.data=(DataType*)malloc(sizeof(DataType)*InitSize);
    return 0;
}

