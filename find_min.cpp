#include<stdio.h>

//call-by-value ����� �̿��� �ּҰ��� ã�� main���� �� ���

int Min(int a, int b, int c);

void main() {
	int a, b, c;
	int min;
	scanf_s("%d %d %d", &a, &b, &c);//3���� �� ����
	min = Min(a, b, c);
	printf("%d", min);//�ּҰ� ���
}

int Min(int a, int b, int c) {
	if (a > b) {
		if (b > c)
			return c;
		else return b;
	}//a�� b���� Ŭ��
	else {
		if (a > c)
			return c;
		else return a;
	}//a�� b���� ������
}//�ּҰ��� ã�� �Լ�