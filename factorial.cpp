#include <stdio.h>

// recursion 방식의 factorial 구하기

int fact(int);

void main() {
	int i;
	for (i = 1; i < 6; i++) {
		if(i<5)
			printf("%d!=%d\n", i, fact(i));//1!~4!까지의 값 출력
		else printf("fact(%d)=%d\n", i, fact(i));//5!의 값 출력
	}
}

int fact(int n) {
	if (n <= 1)
		return 1;
	else
		return n * fact(n - 1);
}// factorial 함수