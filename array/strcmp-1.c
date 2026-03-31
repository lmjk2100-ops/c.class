#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h> 

int main(void)
{
	char a[30];
	char b[30];
	int res;

	printf("첫번째 단어를 고르세요: ");
	scanf("%s", a); 
	//&는 주소를 의미함
	//문자열은 (%s) 그 자체가 주소임 (배열명은 배열의 첫주소이다)
	//문자열의 요소는 &를 붙인다. love -> 안붙임, love의 l만 -> 붙임
	printf("두번째 단어를 고르세요: ");
	scanf("%s", b);

	res = strcmp(a, b);//문자열비교

	if (res < 0)//음수이면 문자열1이 문자열 2보다 사전순으로 앞에 있음
		printf("%s가 %s보다 앞에있다", a, b);
	else if (res == 0)//반환값이 0이면 완전히 같다.
		printf("%s가 %s이랑 같다", a, b);
	else 
		printf("%s가 %s보다 뒤에있다", a, b);//양수이면 문자열1이 문자열2보다 사전순으로 뒤에 있음

	return 0;
}