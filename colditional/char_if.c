
#include <stdio.h>
int main(void)
{	
	char ch; //문자 1글자 변수

	printf("문자를 입력하세요");
	//scanf("%c", &ch);
	ch = getchar();//1글자 입력

	if (ch >= 'A' && ch <= 'Z') // 65~90
	printf("대문자입니다");
	//(ch >= 65 && ch <= 90);

	else if (ch >= 'a' && ch <= 'z') // 97~122
		printf("소문자입니다");
	//(ch >= 97 && ch <= 122);

	else if (ch >= '0' && ch <= '9') // 48~57
		printf("숫자입니다");
	//(ch >= 48 && ch <= 57);

	else
		printf("그외 문자입니다");




	return 0;
}