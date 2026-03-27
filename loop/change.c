#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int price, money, change, change1;
	int c5000, c1000, c100, c10, c1;
	printf("물건값을 입력하세요 : ");
	scanf("%d", &price); //물건값을 입력한다.

	printf("투입금액을 입력하세요 : ");
	scanf("%d", &money);

	change = money - price;// 거스름 돈을 change에 저장

	printf("잔돈은 : %d ", change);

	c5000 = change / 5000; //남은 잔돈에서 5000의 개수를 계산
	change = change % 5000; // change %= 5000 //나머지 연산자를 통해 5000원 단위 제외 남은 잔돈 계산

	c1000 = change / 1000; 
	change = change % 1000;
	
	c100 = change / 100;
	change = change % 100;

	c10 = change / 10;
	change %= 10;

	c1 = change / 1;
	change %= 1;

	printf("5000지폐는: %d\n", c5000);
	printf("1000지폐는: %d\n", c1000);
	printf("100지폐는: %d\n", c100);
	printf("나머지 잔돈 (10원): %d\n", c10);
	printf("나머지 잔돈 (1원): %d\n", c1);

	return 0;
}
