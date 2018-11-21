#include <stdio.h>
#include <malloc.h>

typedef struct node {
	void *dataPtr;
	struct node* link;
} NODE; //노드 구조체 형성

NODE* createNode(void * itemPtr);//프로토 타입

int main(void)
{ // data1에 7 저장, data2에 75 저장
	int* newData;// data값 자체를 저장
	int* nodeData;// data의 node 위치
	NODE* node;//node 생성

	newData = (int*)malloc(sizeof(int));//int만큼의 크기 할당
	*newData = 7;//7 저장
	node = createNode(newData);//nodePtr->dataPtr에 7을 저장
	newData = (int*)malloc(sizeof(int));//int만큼의 크기 할당
	*newData = 75; //75 저장
	node->link = createNode(newData); //node의 link에 newData의 주소 저장
	nodeData = (int*)node->dataPtr;
	printf("data1: %d\n", *nodeData);//data1 출력
	nodeData = (int*)node->link->dataPtr; 
	printf("data2: %d\n", *nodeData);//data2 출력
	return 0;
}

NODE* createNode(void* itemPtr)
{
	NODE* nodePtr = NULL; //node 포인터 생성
	nodePtr = (NODE*)malloc(sizeof(NODE));//NODE만큼의 크기 할당
	nodePtr->dataPtr = itemPtr;//data포인터에 값 저장
	nodePtr->link = NULL;
	return nodePtr;
} 
