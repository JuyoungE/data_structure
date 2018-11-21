#include<stdio.h>
#include<stdlib.h>

//2의 n승을 구하는 함수

int Mul(int &n);

void main() {
	int n;
	scanf_s("%d", &n);//n의 값을 받아옴
	printf("%d", Mul(n));//구한 값을 출력
}

int Mul(int &n) {
	int i;
	int num=1;
	for (i = 0; i < n; i++) {
		num = 2 * num;
	}
	return num;
}//call-by-reference 방식을 이용한 2의 n승 구하기