#define _CRT_SECURE_NO_WARRINGS
#include <stdio.h>

int main()
{
    float dn;
    int wn, gg;
    float ij;

        printf("구하고 싶은 단리에 대한 원금과 이자율과 기간(달)을 차례로 입력하세요(띄어쓰기로 구분):\n");
        scanf("%d %f %d", &wn, &ij, &gg);

        dn = wn+wn*ij*gg;

        printf("구하고 싶은 금액은 %f 입니다.", dn);
}
