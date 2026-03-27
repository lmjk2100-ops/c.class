#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5 //기호상수 5 -> STUDENTS


int main(void)
{
	int score[STUDENTS]; //5개
	int sum = 0; //누석 변수는 0으로 초기화
	float avg;
	int cnt = 0;

	for (int i = 0; i <= 4; i++)
	{
		printf("성적을 입력하세요: ");
		scanf("%d", &score[i]);
		// score[0]~ score[4]에 들어갈값 입력
		// scanf 수행시 배열요소에 &붙임
		if (score[i] < 0 || score[i] > 100) {
			printf("성적을 다시 입력하세요\n");
			//scanf("%d", &score[i]);
			i = i - 1;
			continue;
		}
		if (score[i] != 0) {
			sum = sum + (float)score[i]; // sum+=score
			cnt++;
		}
	}
}

avg = sum / cnt; //5. 실수 계산

printf("성적 합계= %d\n", sum);
printf("성적 평균= %.2f\n", avg);
//printf("성적 합계 = %d\n성적 평균 = %.2f\n", sum, avg);

return 0;
}