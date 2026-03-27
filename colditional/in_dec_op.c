#include <stdio.h>
int main(void)
{	
 //증가감소연산자
	//++a 예) printf("%d", ++a) -> 5였던 a가 1 증가된 후 6을 출력
	//a++ 예) printf("%d", a++) -> 5를 출력한 후 1 증가되어 6이 됨
	//--a 예) printf("%d", a++) -> 5였던 a가 1 감소된 후 4을 출력
	//a-- 예) 예) printf("%d", a++) -> 5을 출력한 후 1 감소되어 4가됨
	int a = 10;
	printf("%d\n", a++);// 10 후위 증가
	printf("%d\n", ++a);// 12 전위 증가
	printf("%d\n", a--);// 12 후위 감소
	printf("%d\n", --a);// 10 전위 감소



	return 0;
}