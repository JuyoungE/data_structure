#include<stdio.h>
#include<stdlib.h>

//임의의 두 정수를 입력 받은 후 두수 사이에 존재하는 수의 합과 곱을 계산

void cul(int &a, int &b);
 
void main() {
	int a, b;
	scanf_s("%d %d", &a, &b);// a,b의 값을 받아옴
	cul(a, b);
	printf("%d %d", a, b);// 구한 값을 출력
}

void cul(int &a, int &b) {
	int temp;
	temp = a;
	a = a + b;//합
	b = temp * b;//곱
}