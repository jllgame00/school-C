#define _CRT_SECURE_NO_WARRINGS
#include <stdio.h>

int main()
{
    float dn;
    int wn, gg;
    float ij;

        printf("���ϰ� ���� �ܸ��� ���� ���ݰ� �������� �Ⱓ(��)�� ���ʷ� �Է��ϼ���(����� ����):\n");
        scanf("%d %f %d", &wn, &ij, &gg);

        dn = wn+wn*ij*gg;

        printf("���ϰ� ���� �ݾ��� %f �Դϴ�.", dn);
}
