# data_structure

I annotated each code of file.

***
# data_structure를 배우기 위한 기본 다지기!(c 언어)

## 함수
### 함수 
	- 프로그램에서 특정한 값을 필요로 할 때 또는 자주 나타나는 동일한 처리과정을 함수로 정의하여 필요할 때마다 호출하여 사용
### 함수정의
	-함수 헤더와 그 본체로 구성
	-헤더에는 가인수에 대한 선언이 필요
	-헤더는 함수의 프로토타입과 일치해야 함
	-함수 본체는 중괄호로 둘러싸야 함
	-반환할 값이 있다면 return(반환값)으로 명시

### 함수의 프로토타입 선언
	-컴파일러에게 미리 함수에 대한 정보를 제공
	-반환값 형과 함수이름, 매개 변수 목록을 표시
	-프로토타입은 세미콜론으로 끝남
	-반환값이나 가인수가 없을 경우에는 void로 명시

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

## 많이 쓰이는 명령어들
	
