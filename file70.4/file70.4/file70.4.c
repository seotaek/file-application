#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fgets, fclose �Լ��� ����� ��� ����

int main()
{
    char buffer[20] = { 0, };    // ������ ���� �� ����� �ӽ� ����

    FILE* fp = fopen("hello.txt", "r");    // hello.txt ������ �б� ���� ����.  
                                           // ���� �����͸� ��ȯ

    //fgets(buffer, sizeof(buffer), fp);    // hello.txt���� ���ڿ��� ����
    fread(buffer, sizeof(buffer), 1, fp); //�� ��ü ����


    printf("%s\n", buffer);    // Hello, world!: ������ ���� ���

    fclose(fp);    // ���� ������ �ݱ�

    return 0;
}
//gets(����, ����ũ��, ����������);
//char* fgets(char* _Buffer, int _MaxCount, FILE* _Stream);
//�����ϸ� ���� ���ڿ��� �����͸� ��ȯ, �����ϸ� NULL�� ��ȯ

//fread(����, �б�ũ��, �б�Ƚ��, ����������);
//size_t fread(void* _Buffer, size_t _ElementSize, size_t _ElementCount, FILE* _Stream);
//������ �б� Ƚ���� ��ȯ, �����ϸ� ������ �б� Ƚ������ ���� ���� ��ȯ