#include <stdio.h>

// recursion ����� factorial ���ϱ�

int fact(int);

void main() {
	int i;
	for (i = 1; i < 6; i++) {
		if(i<5)
			printf("%d!=%d\n", i, fact(i));//1!~4!������ �� ���
		else printf("fact(%d)=%d\n", i, fact(i));//5!�� �� ���
	}
}

int fact(int n) {
	if (n <= 1)
		return 1;
	else
		return n * fact(n - 1);
}// factorial �Լ�