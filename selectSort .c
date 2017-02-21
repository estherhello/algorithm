#include<stdio.h>

/*
选择排序：
在n个数中选出最小的与第一个交换，在剩下的n-1个数中选出最小的与第二个交换，重复这个过程，直到数组有序
*/
void selectSort(int a[],int length){
	int i,j,t,min,k;
	for(i = 0;i < length-1;i++) {
		min = a[i];
		k = i;
		for(j = i;j < length;j++){
			if(min > a[j]){
				min = a[j];
				k = j;
			}
		}
		t = a[i];
		a[i] = a[k];
		a[k] = t;
	}
}

void display(int a[],int length) {
	int i;
	for(i = 0;i < length;i++){
		printf("%d\t",a[i]);
	}
}

int main(void) {
	//测试数据
	int test[] = {1,9,3,7,4,5,2,0,6,8};
	selectSort(test,10);
	display(test,10);
	return 0;
}