#include <stdio.h>
	int digit(int n) //함수 선언, 
	{
		if (n < 10) return n; //숫자가 한자리면 그대로 반환함
								//return : 값을 돌려주고 그 자리에서 함수를 종료시킴
		return (n % 10) + digit(n / 10); //마지막 자릿수(n % 10) + 나머지 앞부분의 숫자 (n / 10)의 자리 합
	}
	int main(){
		
		printf("%d", digit(235)); //235의 각 자리 숫자 합을 출력한다
		//2+3=5,
		//5+5=10
		//10
	}