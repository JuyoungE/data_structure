#include<stdio.h>



void Get_Score(int data[]);
void Arr_Score(int data[]);
void Prn_Score(int data[]);
void main() {
	int score[10];
	Get_Score(score);
	Arr_Score(score);
	Prn_Score(score);
}
void Get_Score(int data[]) {
	int i;
	for (i = 0; i < 10; i++) {
		printf("입력\n");
		scanf_s("%d", &data[i]);
	}
}// 10명의 학생의 점수를 입력 받음

void Arr_Score(int data[]) {
	int i,j,temp;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (data[j] < data[j+1]) {
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
} // 입력받은 점수들을 내림차순으로 정렬

void Prn_Score(int data[]) {
	int i;
	for (i = 0; i < 10; i++)
		printf("%d\t", data[i]);
}// 정렬된 데이터를 출력