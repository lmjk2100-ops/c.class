#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 0;
	do {
		printf("1: 새로만들기 : ");
		printf(" 2: 파일열기 : ");
		printf("3: 파일닫기 : ");
		printf("올바른 메뉴를 입력하세요 : ");
		scanf("%d", &i);

	} while (i < 1 || i > 3);

		printf("선택메뉴는: %d", i);

	return 0;
}