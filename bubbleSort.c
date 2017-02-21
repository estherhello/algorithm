#include<stdio.h>

/*
冒泡排序：
1.一组n个数据，第一个数与第二个数比较，如果比第二个大，交换，第二个与第三个比较，比它大则交换，重复这个过程，直到最大的沉到最后。
2.在剩下的数中重复上述过程，依次找出第二大的数，第三大的数……直到数组有序
*/
void bubbleSort(int a[],int length){
	int i,j,t;
	for(i = length-1;i > 0;i--){
		for(j = 0 ;j < i;j++){
			if(a[j] > a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
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
	bubbleSort(test,10);
	display(test,10);
	return 0;
}