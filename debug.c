#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


#define datatype int

#define MAXSIZE 100



typedef struct{

	datatype data[MAXSIZE];

	int last;

}SeqList;



SeqList *InIt(){

	SeqList *L;

	L=(SeqList*)malloc(sizeof(SeqList));//mollc()

	L->last=-1;

	return L;

}



int InsList(SeqList *L, int i, datatype x){

	if (i<0||i>MAXSIZE){

		return -1;

		printf("Ҫ����㲻�ڷ�Χ��");/* code */

	}

	if (L->last==MAXSIZE){

		return -1;

		printf("���Ա�����");/* code */

	}
	int j;
	for (j=L->last+1; j>i && j>0; --j){

		L->data[j]=L->data[j-1];/* data(j++) */


	}
	L->data[i]=x;
	L->last++;

	return 1;

}



int DelList(SeqList *L, int i){

	if (i<0||i>L->last){

		return -1;

		printf("Ҫɾ���㲻�ڷ�Χ��");/* code */

	}
	int j;
	for (j=i; j<L->last; ++j){

		L->data[j]=L->data[j+1];/* code */	

	}

	L->last--;

	return 1;

}



int SeacherList(SeqList *L, datatype x){
	int j;
	for (j=0; j<=L->last; ++j){

		if(L->data[j]==x)
		return j;/* code */

	}

	return -1;

}



void ShowList(SeqList *L){
	int j;	
	for (j=0; j<=L->last; ++j){

		printf("%d",L->data[j]);/* code */

	}

}



main(){

	int x=0;

	SeqList *L;
	L=InIt();
	int i;
	for (i=0; x!=-1; ++i){

		scanf("%d",&x);/* code */

		InsList(L,i,x);

	}

	ShowList(L);

}

