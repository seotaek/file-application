#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fseek, ftell, fclose �Լ��� ����� ��� ����

int main()
{
    int size;

    FILE* fp = fopen("hello.txt", "r");    // hello.txt ������ �б� ���(r)�� ����.
                                           // ���� �����͸� ��ȯ

    fseek(fp, 0, SEEK_END);    // ���� �����͸� ������ ������ �̵���Ŵ
    size = ftell(fp);          // ���� �������� ���� ��ġ�� ����

    printf("%d\n", size);      // 13

    fclose(fp);

    return 0;
}
//fseek(����������, �̵���ũ��, ������);
//int fseek(FILE* _Stream, long _Offset, int _Origin);
//�����ϸ� 0, �����ϸ� - 1�� ��ȯ
//ftell(����������);
//long ftell(FILE* _Stream);
//���� �������� ���� ��ġ�� ��ȯ, �����ϸ� - 1�� ��ȯ