#include<stdio.h>

void Chg(double *data);

void main() {
	double tem;

	scanf_s("%lf", &tem);//�µ��� �޾ƿ�
	Chg(&tem);
	printf("%lf", tem);
}

void Chg(double *data) {
	*data =(double) 9 / 5 * (*data) + 32;
}//call-by-address ����� �̿��� ȭ�� �µ� ���ϱ�