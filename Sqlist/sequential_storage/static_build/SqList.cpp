#define MaxSize 50
typedef int DataType;
typedef struct{
    DataType data[MaxSize];
    int length;
} SqList;

bool Insert(SqList &L,int i,DataType d){
    if (i<1||i>L.length+1){
        return false;
    }else if (L.length>=MaxSize){
        return false;
    }
    // 从I开始向后移动一位
    for(int j=L.length;j>=i;j--){
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=d;
    L.length++;
    return true;
}
// &:引用数据类型
bool Delete(SqList &L,int i,DataType &d){
    if (i<1||i>L.length){
        return false; 
    }
    d=L.data[i-1];
    for (int j = i; j < L.length; j++){
        L.data[j-1]=L.data[i];
    }
    L.length--;
    return true;
}