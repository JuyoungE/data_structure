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
		printf("�Է�\n");
		scanf_s("%d", &data[i]);
	}
}// 10���� �л��� ������ �Է� ����

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
} // �Է¹��� �������� ������������ ����

void Prn_Score(int data[]) {
	int i;
	for (i = 0; i < 10; i++)
		printf("%d\t", data[i]);
}// ���ĵ� �����͸� ���