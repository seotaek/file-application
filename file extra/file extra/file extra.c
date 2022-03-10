#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fwrite, fclose �Լ��� ����� ��� ����
#include<string.h>

#pragma pack(push, 1)
struct X850Firmware {
	short serial;
	char mode;
	char desc[20];
	int version;
};
#pragma pack(pop)

int main() {
	struct X850Firmware d1;
	memset(&d1, 0, sizeof(d1));

	d1.mode = 'a';
	d1.serial = 32100;
	d1.version = 2100000100;
	strcpy(d1.desc, "Hello, world!");

	FILE* fp = fopen("data2.bin", "wb");
	fwrite(&d1, sizeof(d1), 1, fp);
	fclose(fp);
	return 0;
}
