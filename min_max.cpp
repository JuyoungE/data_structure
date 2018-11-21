#include<stdio.h>
#include<stdlib.h>

//임의의 실수 10개의 정수에 대해 최대값과 최소값을 구하여 반환

int Find_Max(int data[]);
int Find_Min(int *data);

void main() {
	int value[10];
	int max, min,i;

	for (i = 0; i < 10; i++) {
		value[i] = rand();
		printf("%d\t", value[i]);
	}//임의의 수 10개 받아옴
	printf("\n");
	max = Find_Max(value);
	min = Find_Min(value);
	printf("%d\n", max);//max값 출력
	printf("%d\n", min);//min값 출력
}

int Find_Max(int data[]) {
	int max = data[0];
	int i;

	for (i = 1; i < 10; i++) {
		if (data[i] > max)
			max = data[i];
	}//값을 비교해가며 max에 큰 data값 저장
	return max;
}//max값을 구하는 함수

int Find_Min(int *data) {
	int min = *data,temp;
	int i;

	for (i = 1; i < 10; i++) {
		temp = (*data++);
		if (min > temp)
			min = temp;
	}//값을 비교해가며 min에 큰 data값 저장

	return min;
}//min값을 구하는 함수