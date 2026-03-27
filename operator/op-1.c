#include <stdio.h>
int main(void)
{
	int val1=10, val2 = 12;
	int result1, result2, result3;
	result1 = (val1 == 10 && val2==12);//1 , 1=참
	result2 = (val1 < 10 || val2>12); //0 , 0=거짓
	result3= (!val1); //0 ,!는 반대를말함 val1은 참이므로 !이 있으니까 거짓으로 바뀜 즉 0으로 출력이 됨
	printf("result1 : %d\n", result1);
	printf("result2 : %d\n", result2);
	printf("result3 : %d\n", result3);



	return 0;
}