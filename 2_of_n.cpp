#include<stdio.h>
#include<stdlib.h>

//2�� n���� ���ϴ� �Լ�

int Mul(int &n);

void main() {
	int n;
	scanf_s("%d", &n);//n�� ���� �޾ƿ�
	printf("%d", Mul(n));//���� ���� ���
}

int Mul(int &n) {
	int i;
	int num=1;
	for (i = 0; i < n; i++) {
		num = 2 * num;
	}
	return num;
}//call-by-reference ����� �̿��� 2�� n�� ���ϱ�