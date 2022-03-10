#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fseek, ftell, fread, fclose �Լ��� ����� ��� ����
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
#include <string.h>    // memset �Լ��� ����� ��� ����

int main()
{
    char* buffer;
    int size;
    

    FILE* fp = fopen("words.txt", "r");    // hello.txt ������ �б� ���(r)�� ����.
                                           // ���� �����͸� ��ȯ

    fseek(fp, 0, SEEK_END);    // ���� �����͸� ������ ������ �̵���Ŵ
    size = ftell(fp);          // ���� �������� ���� ��ġ�� ����

    buffer = malloc(size + 1);    // ���� ũ�� + 1����Ʈ(���ڿ� �������� NULL)��ŭ ���� �޸� �Ҵ�
    memset(buffer, 0, size + 1);  // ���� ũ�� + 1����Ʈ��ŭ �޸𸮸� 0���� �ʱ�ȭ

    fseek(fp, 0, SEEK_SET);                // ���� �����͸� ������ ó������ �̵���Ŵ
    fread(buffer, size, 1, fp);    // hello.txt���� ���� ũ�⸸ŭ ���� ����

    for (int i = size - 1; i >= 0; i--)
        fwrite(&buffer[i], 1, 1, stdout);
    
    fclose(fp);     // ���� ������ �ݱ�

    free(buffer);   // ���� �޸� ����

    return 0;
}