#include <stdio.h>
int main(void)
{
	int num1, num2;//정수형 변수에 num1, num2를 넣음 쉼표를 넣어서 두가지 변수를 만들수 있다.
	int res1; //정수형 변수에 res1을 넣음
	double res2; //실수형 변수에 didv를 넣음
	char op, a; //문자형 변수에 op를 넣음

	while (1) //무한 반복 루프를 할때 넣는 함수로 1은 참을 이야기함. break를 만나야 반복이 종료됨.
	{
		printf("첫 번째 숫자 입력: ");
		scanf_s("%d", &num1); //scanf는 불안정한 함수라서 뒤에_s를 달음

		printf("연산자 입력(+, -, *, /): ");
		scanf_s(" %c", &op);

		printf("두 번째 숫자 입력: ");
		scanf_s("%d", &num2);

		switch (op) {
		case '+': //연산자는 문자형이라서 작은따음표를 달아줘야함, 숫자는 안씀
			res1 = num1 + num2;
			//printf("덧셈결과: %d\n", sum);
			break;

		case '-':
			res1 = num1 - num2;
			//printf("뺄셈결과: %d\n", sub);
			break;

		case '*':
			res1 = num1 * num2;
			//printf("곱셈결과: %d\n", mul);
			break;

		case '/':
			res2 = (double)num1 / num2;//둘 다 정수형 변수인데 하나의 정수 변수에 double을 넣으면 실수형 변수로 변해서 나옴
			//printf("나눗셈결과: %.2f\n", divi);//소수점 두번 자리까지 받기 위해서 .2를 %f에 넣음
			break;

			//default:
				//printf("입력오류");
				//break;//default는 break를 안써도 가능함.
		}

		if (op == '+' || op == '-' || op == '*') //||은 or을 나타내는 논리연산자로 셋중에 하나라도 참이면 실행
			printf("연산결과: %d\n", res1);

		else if (op == '/')
			printf("연산 결과: %.2f\n", res2);

		else
			printf("입력 오류");

		printf("연산을 종료하시겠습니까?(y/Y)\n");//소문자 또는 대문자 y를 입력받으면 종료
		break;
		scanf_s(" %c", &a);

		if (a == 'y' || a == 'Y')
			break;
	}

	return 0;//프로그램 정상종료
}