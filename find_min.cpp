#include<stdio.h>

//call-by-value 방식을 이용해 최소값을 찾고 main에서 값 출력

int Min(int a, int b, int c);

void main() {
	int a, b, c;
	int min;
	scanf_s("%d %d %d", &a, &b, &c);//3개의 수 받음
	min = Min(a, b, c);
	printf("%d", min);//최소값 출력
}

int Min(int a, int b, int c) {
	if (a > b) {
		if (b > c)
			return c;
		else return b;
	}//a가 b보다 클때
	else {
		if (a > c)
			return c;
		else return a;
	}//a가 b보다 작을때
}//최소값을 찾는 함수