#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	//int num1, num2;
	//int	sum = 0;

	//printf("숫자를 입력하세요"); 
	//scanf("%d", &num2);//10입력

	//for (num1 = 1; num1 <= num2 ; num1++) {
	//	sum = sum + num1; // sum += num1
	//}
	//	printf("합계:%d", sum);

	int num1; //정수 1
	int num2; //정수 2

	printf("원하는 단을 입력하세요 "); //단을 정수형으로 입력받기
	scanf("%d", &num1); //num1이라는 변수 안에 숫자 저장
	//printf("< %d단 >\n", num1); //입력한 단 출력

		for (num1 = 2; num1 <= 9; num1++) {// num2에 1을 더하는데 후위 증가라서 1<=9 
			// num1(단) * num2(1~9)까지 결과가나옴
			printf("< %d단 >\n", num1);

			for (num2 = 1; num2 <= 9; num2++) {
				printf("%d * %d = %d\n", num1, num2, num1 * num2);
			}

			printf("\n");
		}//3d -> 3자리 //원래는 오른쪽 정렬 //~을 붙이면 왼쪽 정렬
		//i for 끝

		return 0;
}//main 끝