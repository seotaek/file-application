#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fwrite, fclose 함수가 선언된 헤더 파일
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
