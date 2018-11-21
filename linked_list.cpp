#include <stdio.h>
#include <malloc.h>

typedef struct node {
	void *dataPtr;
	struct node* link;
} NODE; //��� ����ü ����

NODE* createNode(void * itemPtr);//������ Ÿ��

int main(void)
{ // data1�� 7 ����, data2�� 75 ����
	int* newData;// data�� ��ü�� ����
	int* nodeData;// data�� node ��ġ
	NODE* node;//node ����

	newData = (int*)malloc(sizeof(int));//int��ŭ�� ũ�� �Ҵ�
	*newData = 7;//7 ����
	node = createNode(newData);//nodePtr->dataPtr�� 7�� ����
	newData = (int*)malloc(sizeof(int));//int��ŭ�� ũ�� �Ҵ�
	*newData = 75; //75 ����
	node->link = createNode(newData); //node�� link�� newData�� �ּ� ����
	nodeData = (int*)node->dataPtr;
	printf("data1: %d\n", *nodeData);//data1 ���
	nodeData = (int*)node->link->dataPtr; 
	printf("data2: %d\n", *nodeData);//data2 ���
	return 0;
}

NODE* createNode(void* itemPtr)
{
	NODE* nodePtr = NULL; //node ������ ����
	nodePtr = (NODE*)malloc(sizeof(NODE));//NODE��ŭ�� ũ�� �Ҵ�
	nodePtr->dataPtr = itemPtr;//data�����Ϳ� �� ����
	nodePtr->link = NULL;
	return nodePtr;
} 
