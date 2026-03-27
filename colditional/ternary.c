
//상황연산자 : if~else 를 단결히 표현
// 조건 ?   a : b =>조건이 참이면 A 아니면 B
#include <stdio.h>
int main(void)
{	
	//int a = 10, b = 20;
	//int max;

		/*max = a > b ? a : b;
		printf("%d", max);*/

	int num;
	printf("정수 입력:");
		scanf_s("%d\n",&num);

	(num % 2 == 0) ? printf("짝수") : printf("홀수");
	//삼항연산자는 정수 num을 2로 나눴을때 나머지가 0이면 짝수로 출력 아니면 콜론 뒤에 있는 홀수를 출력. (참 : 거짓)
	// %는 나머지를 의미하는 산술연산자이다.
	return 0;
}