#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int am, bm;
    int a, t;
    int mh, mc, mg;

    printf("�������� �Ŵ޷� �ִ� ��ü�� ������ ���ſ� ������� �Է��ϼ���.(�⺻���� ������ kg�Դϴ�.) ex)20 10: ");
    scanf("%d %d", &am, &bm);

    mh = am + bm;
    mc = am - bm;
    mg = am * bm;

    a = mc * 10 / mh;
    t =  mg * 20 / mh;

    printf("���ӵ��� %d m/s^2�̰�, ����� %d N�Դϴ�.", a, t);

    return 0;
}
