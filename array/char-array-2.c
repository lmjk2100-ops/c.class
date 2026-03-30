#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    int i;
    char fruit[3][20];

    for (i = 0; i < 3; i++) { //0~2
        printf("과일 이름을 입력하세요: ");
        scanf("%s", fruit[i]);
        printf("%d 번째 과일은: %s \n", i, fruit[i]); //menu[i]는 행을 의미

    }

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    int i;
    char menu[5][10] = { //5행 10열 (0~4행, 0~9열)
        "init", // 1행씩 초기값 설정
        "open",
        "close",
        "read",
        "write"
    };

    for (i = 0; i < 5; i++) //0~4
        printf("%d 번째 메뉴: %s \n", i, menu[i]); //menu[i]는 행을 의미

    return 0;
}