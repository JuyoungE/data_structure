#include<stdio.h>
#include<stdlib.h>

//call-by-address

int Fac(int *n);//프로토 타입 선언

void main() {
	int n;
	n = rand();//임의의 값 받아옴
	printf("%d", Fac(&n));//factorial 값 출력
}

int Fac(int *n) {
	int i;
	int num;
	for (i = 1; i <= *n; i++)
		num = i * (*n);
	return num;
}// call-by-address 방식을 이용한 factorial