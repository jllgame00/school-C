#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int m, a;
    int f;

    printf("구하고 싶은 힘에 대한 질량과 가속도를 각각 입력하세요:\n");
    scanf("%d %d", &m, &a);

    f = m * a;


    printf("구하고 싶은 힘은 %d 입니다.", f);

    return 0;
}
