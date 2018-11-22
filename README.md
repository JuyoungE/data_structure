# data_structure

I annotated each code of file.

***
# data_structure를 배우기 위한 기본 다지기!(c 언어)

## 함수에 인수 할당하기
### Call-by-value
	-가인수를 위한 메모리공간이 따로 만들어져 실인수의 값이 가인수로 전달됨
	-가인수를 수정하여도 실인수는 수정되지 않으므로 모듈간의 독립성을 유지할 수 있음

	example)
		int inc10(int num);
		void main(){
			int num=3;
			printf("inc(10)=%d \n num=%d",inc10(num),num);}
		
		int inc10(int num){
			num+=10;
			return num;}


### Call-by-address
	-함수의 인자로서의 포인터 사용
	-포인터를 인수로 전달하는 방법
	-가인수의 값이 바뀌면 실인수(원본)도 바뀜 (모듈간의 독립성이 없어짐)
	-여러개의 결과를 반환 받을 수 있음

	example)
		void swap(int * ,int *);
		void main(){
			int a=3,b=5;
			printf("바꾸기 전 a=%d b=%d \n",a,b);
			swap(&a,&b);
			printf("바 꾼 후 a=%d b=%d\n",a,b);}
		
		void swap(int *a, int *b){
			int temp;
			temp=*a; *a=*b; *b=temp;}

### Call-by-reference
	-참조에 의한 호출
	-가인수가 실인수의 기억장소 공유
	-가인수가 수정되면 실인수도 수정
	
	example)
		void swap(int &, int&);
		void main(){
			int a=3, b=5;
			printf("바꾸기 전 a=%d b=%d\n",a,b);
			swap(a,b);
			printf("바꾼 후 a=%d b=%d\n",a,b);}
		
		void swap(int &a, int &b){
			int temp;
			temp=a; a=b; b=temp;}

