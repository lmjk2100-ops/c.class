#include <stdio.h>
int main()
{	
	//int a;
	//a = sizeof(int) + sizeof(char); //int는 4byte char 1byte 5
	//printf("%d", a); // a=5
	//int a = 7 + 6; // a = 13
	//int b = (int)7.3 + (int)6.7; //정수형으로 변해서 b = 7 + 6 = 13
	//printf("%d %d", a, b); // a = 13 , b = 13
	float t; //실수형 변수 t
	t = 10 / 3; // 변수 t에 10을 3으로 나누는 값 대입
	printf("%f", t); //t=3.000000
	t = (float)10 / 3; //실수형 나누기 정수형은 실수형 값으로 나온다
	printf('%f', t); //t=3.000000



	return 0;
}