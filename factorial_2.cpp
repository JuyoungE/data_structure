#include<stdio.h>
#include<stdlib.h>

//call-by-address

int Fac(int *n);//������ Ÿ�� ����

void main() {
	int n;
	n = rand();//������ �� �޾ƿ�
	printf("%d", Fac(&n));//factorial �� ���
}

int Fac(int *n) {
	int i;
	int num;
	for (i = 1; i <= *n; i++)
		num = i * (*n);
	return num;
}// call-by-address ����� �̿��� factorial