#include<stdio.h>

/*
ð������
1.һ��n�����ݣ���һ������ڶ������Ƚϣ�����ȵڶ����󣬽������ڶ�����������Ƚϣ��������򽻻����ظ�������̣�ֱ�����ĳ������
2.��ʣ�µ������ظ��������̣������ҳ��ڶ���������������������ֱ����������
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
	//��������
	int test[] = {1,9,3,7,4,5,2,0,6,8};
	bubbleSort(test,10);
	display(test,10);
	return 0;
}