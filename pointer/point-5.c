#include <stdio.h>
int add(int x, int y);
void sub(int i, int j);
void arr_prn(int d[5]);

int main(void)
{
	int a = 10;
	int b = 20;
	int c[5] = { 1,2,3,4,5 }; //배열
	add(a, b);    //함수 호출, 인수 2개 -> 더할려고
	sub(a, b);
	printf("%d\n", add(a, b));

	arr_prn(c);


	return 0;
}
int add(int x, int y) //매개변수
{
	int k = x + y;

	return k; //30 반환
}
void sub(int i, int j)
{
	int g = i - j;
	printf("%d", g);
}

void arr_prn(int d[5])
{
	for (int i = 0; i < 5; i++) {
		printf("%d\n", d[i]);
	}
}