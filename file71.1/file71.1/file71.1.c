#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fseek, ftell, fclose 함수가 선언된 헤더 파일

int main()
{
    int size;

    FILE* fp = fopen("hello.txt", "r");    // hello.txt 파일을 읽기 모드(r)로 열기.
                                           // 파일 포인터를 반환

    fseek(fp, 0, SEEK_END);    // 파일 포인터를 파일의 끝으로 이동시킴
    size = ftell(fp);          // 파일 포인터의 현재 위치를 얻음

    printf("%d\n", size);      // 13

    fclose(fp);

    return 0;
}
//fseek(파일포인터, 이동할크기, 기준점);
//int fseek(FILE* _Stream, long _Offset, int _Origin);
//성공하면 0, 실패하면 - 1을 반환
//ftell(파일포인터);
//long ftell(FILE* _Stream);
//파일 포인터의 현재 위치를 반환, 실패하면 - 1을 반환