#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, cnt = 0, i;
	printf("원하는 배수 입력 : "); //3
	scanf("%d", &i);//i는 원하는 배수의 숫자
	printf("배수의 개수 입력 : ");
	scanf("%d", &num);//보여지는 배수의 개수 num=5 입력
	while (cnt++ < num)
		// 0 < 5 조건 물어보고 참 => 다음문장 가기전에 cnt + 1 -> cnt 1이됨
		// 1 < 5 조건 물어보고 참 => 다음문장 가기전에 cnt + 1 -> cnt 2이됨
		// 2 < 5 조건 물어보고 참 = > 다음문장 가기전에 cnt + 1 -> cnt 3이됨
		// 3 < 5 조건 물어보고 참 = > 다음문장 가기전에 cnt + 1 -> cnt 4이됨
		// 4 < 5 조건 물어보고 거짓 = > 탈출
		printf("%d", i * cnt);	//3 * 1
								//3 * 2
								//3 * 3
								//3 * 4
								//3 * 5 -> 탈출

	return 0;
}