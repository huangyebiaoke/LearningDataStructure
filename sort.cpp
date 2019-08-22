#include<stdio.h>
#include<iostream>

typedef int datatype;//template<class datatype>可以不用重新编译

void selectionSort (datatype *a, int n){//降序排列
	for (int i = 0; i < n; ++i){
		int j=i;
		for (int k = i+1; k < n; ++k)
			if(a[k]<a[j]) k=j;
		datatype t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
}

int main(int argc, char const *argv[]){
	datatype a[6]={3,5,4,8,9,1};
	int n=sizeof(a)/sizeof(datatype);
	selectionSort(a,n);
	for (int i = 0; i < n; ++i){
		printf("%d\t",a[i]);
	}
	return 0;
}
