#include<stdio.h>

void Chg(double *data);

void main() {
	double tem;

	scanf_s("%lf", &tem);//온도를 받아옴
	Chg(&tem);
	printf("%lf", tem);
}

void Chg(double *data) {
	*data =(double) 9 / 5 * (*data) + 32;
}//call-by-address 방식을 이용한 화씨 온도 구하기