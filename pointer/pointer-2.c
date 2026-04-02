#include <stdio.h>
int main(void) {
	int i = 3000;
	int *p = NULL; //포인터변수 선언

	p = &i; //i변수의 주소를 p 포인터 변수에 줌

	printf("p = %p\n", p);
	//%p : 주소를 출력하는 서식 문자
	printf("&i = %p\n\n", &i);

	printf("i = %d\n", i);
	printf("*p = %d\n", *p);
	//주소에 저장된 내용에 접근하는 포인터

	int x = 10, y = 20;
	int* pi; // 포인터 변수

	pi = &x; // 포인터 변수 pi에 변수x의 주소를 넣는다
	printf("pi = %p\n", pi); // pi가 가진 주소를 출력한다. (x의 주소를 pi가 가지고 있으므로 x의 주소가 나옴) 
	printf("*pi = %d\n", *pi); //pi가 가르키는 x의 주소가 가지는 값 pi = 10

	pi = &y; // 포인터 변수 pi에 변수 y의 주소를 넣는다
	printf("pi = %p\n", pi);  // pi가 가진 주소를 출력한다. (y의 주소를 pi가 가지고 있으므로 y의 주소가 나옴)
	printf("*pi = %d\n", *pi); //pi가 가르키는 y의 주소가 가지는 값 pi = 20
	
	return 0;

}