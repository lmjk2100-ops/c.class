#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2 = 1, res;

	printf("출력하고싶은 단은:");
	scanf("%d", &num1);

	while (num2 <= 9){
		res = num1 * num2;
		printf("%d x %d = %d", num1, num2, res);
		num2++;
	}

	return 0;
}