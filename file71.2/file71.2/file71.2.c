#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fseek, ftell, fread, fclose 함수가 선언된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // memset 함수가 선언된 헤더 파일

int main() {
	char* buffer;
	int size;
	int count;

	FILE* fp = fopen("hello.txt", "r");

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);

	buffer = malloc(size + 1);
	memset(buffer, 0, size + 1);
	
	fseek(fp, 0, SEEK_SET);
	count = fread(buffer, size, 1, fp);

	printf("%s size: %d, count: %d\n", buffer, size, count);

	fclose(fp);

	free(buffer);

	return 0;
}