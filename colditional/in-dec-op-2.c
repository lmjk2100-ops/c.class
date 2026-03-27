#include <stdio.h>
int main(void)
{	
	int a, b, c;
	a = 5 % 3; // 5를 3으로 나눴을때 나머지
	a--; //1
	b = (a++) + 3; //3을 먼저 더해서  1 + 3 = 4
		printf("%d%d\n", a, b); //a=2
	c = (++a + 3); //a는 먼저 더해서 2+1=3이되고 즉 결과가 6이 됨
	printf("%d, %d, %d", a, b, c); // a=3 , b=4 , c=6

	return 0;

}