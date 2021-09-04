#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int am, bm;
    int a, t;
    int mh, mc, mg;

    printf("도르래에 매달려 있는 물체의 질량을 무거운 순서대로 입력하세요.(기본적인 단위는 kg입니다.) ex)20 10: ");
    scanf("%d %d", &am, &bm);

    mh = am + bm;
    mc = am - bm;
    mg = am * bm;

    a = mc * 10 / mh;
    t =  mg * 20 / mh;

    printf("가속도는 %d m/s^2이고, 장력은 %d N입니다.", a, t);

    return 0;
}
