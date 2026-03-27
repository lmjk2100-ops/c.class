#include<stdio.h>
int main(void)
	{
		int n = 5;
		switch(n){
			case 1:
				printf("1번 압력");
					break;

			case 2:
				printf("2번 입력");
					break;

			case 3:
				printf("3번 압력");
					break;

		default:
				printf("입력오류");
		}
		return 0;
	}