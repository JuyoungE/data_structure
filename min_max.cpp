#include<stdio.h>
#include<stdlib.h>

//������ �Ǽ� 10���� ������ ���� �ִ밪�� �ּҰ��� ���Ͽ� ��ȯ

int Find_Max(int data[]);
int Find_Min(int *data);

void main() {
	int value[10];
	int max, min,i;

	for (i = 0; i < 10; i++) {
		value[i] = rand();
		printf("%d\t", value[i]);
	}//������ �� 10�� �޾ƿ�
	printf("\n");
	max = Find_Max(value);
	min = Find_Min(value);
	printf("%d\n", max);//max�� ���
	printf("%d\n", min);//min�� ���
}

int Find_Max(int data[]) {
	int max = data[0];
	int i;

	for (i = 1; i < 10; i++) {
		if (data[i] > max)
			max = data[i];
	}//���� ���ذ��� max�� ū data�� ����
	return max;
}//max���� ���ϴ� �Լ�

int Find_Min(int *data) {
	int min = *data,temp;
	int i;

	for (i = 1; i < 10; i++) {
		temp = (*data++);
		if (min > temp)
			min = temp;
	}//���� ���ذ��� min�� ū data�� ����

	return min;
}//min���� ���ϴ� �Լ�