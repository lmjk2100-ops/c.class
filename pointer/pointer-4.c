#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ar[10]; //10개의 배열

	printf("정수개 입력 : ");
	for (int i = 0; i < 10; i++){

		scanf("%d", &ar[i]);
	}

	int res;
	res = cuount_even(ar); //함수 호출
	//출력 res
	print_cnt(res); // 함수 호출

	return 0;
}

//함수 정의
 int cuount_even(int ar[10])
{	
	 int cnt = 0;
	 for (int i = 0; i < 10; i++) 
	 {
		 if (ar[i] % 2 == 0)
			 cnt = cnt + 1;//짝수이면 1증가
	 }
	
	 return cnt; //반환 되는 짝수의 개수
}
 //함수 정의
 void print_cnt(int res) { //매개변수 정수형 res -> r
	 printf("개수는 : %d", res);
 }