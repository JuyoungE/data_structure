#include<stdio.h>
#include<stdlib.h>

//������ �� ������ �Է� ���� �� �μ� ���̿� �����ϴ� ���� �հ� ���� ���

void cul(int &a, int &b);
 
void main() {
	int a, b;
	scanf_s("%d %d", &a, &b);// a,b�� ���� �޾ƿ�
	cul(a, b);
	printf("%d %d", a, b);// ���� ���� ���
}

void cul(int &a, int &b) {
	int temp;
	temp = a;
	a = a + b;//��
	b = temp * b;//��
}