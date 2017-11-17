#include<stdio.h>

#define datatype int
#define MAXSIZE 100

typedef struct{
	datatype data[MAXSIZE];
	int last;
}SeqList;

SeqList *InIt(){
	SeqList *L;
	L=new SeqList;//L=(SeqList*)malloc(sizeof(SeqList));
	L->last=-1;
	return L;
}

int InsList(SeqList *L, int i, datatype x){
	if (i<0||i>MAXSIZE){
		printf("要插入点不在范围内");
		return -1;
	}
	if (L->last==MAXSIZE){
		printf("线性表已满");
		return -1;
	}
	for (int j=L->last+1; j>=i; --j){
		L->data[j]=L->data[--j];/* data(j++) */	
	}
	L->data[i]=x;
	L->last++;
	return 1;
}

int DelList(SeqList *L, int i){
	if (i<0||i>MAXSIZE){
		printf("要删除点不在范围内");
		return -1;
		
	}
	for (int j=i; j<=L->last-1; ++j){
		L->data[j]=L->data[++j];
	}
	L->last--;
	return 1;
}

int SeacherList(SeqList *L, datatype x){
	for (int j=0; j<=L->last; ++j){
		if(L->data[j]==x){
		return j;
		}
	}
}

void ShowList(SeqList *L){
	for (int j=0; j<=L->last; ++j){
		printf("%d\t",L->data[j]);
	}
}

int main(int argc, char const *argv[]){
	int x=0;
	SeqList *L;
	L=InIt();
	for (int i=0; ; ++i){
		scanf("%d",&x);
		if (x==-1)
			break;
		InsList(L,i,x);
	}
	ShowList(L);
	return 0;
}






