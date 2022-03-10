#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fgets, fclose 함수가 선언된 헤더 파일

int main()
{
    char buffer[20] = { 0, };    // 파일을 읽을 때 사용할 임시 공간

    FILE* fp = fopen("hello.txt", "r");    // hello.txt 파일을 읽기 모드로 열기.  
                                           // 파일 포인터를 반환

    //fgets(buffer, sizeof(buffer), fp);    // hello.txt에서 문자열을 읽음
    fread(buffer, sizeof(buffer), 1, fp); //로 대체 가능


    printf("%s\n", buffer);    // Hello, world!: 파일의 내용 출력

    fclose(fp);    // 파일 포인터 닫기

    return 0;
}
//gets(버퍼, 버퍼크기, 파일포인터);
//char* fgets(char* _Buffer, int _MaxCount, FILE* _Stream);
//성공하면 읽은 문자열의 포인터를 반환, 실패하면 NULL을 반환

//fread(버퍼, 읽기크기, 읽기횟수, 파일포인터);
//size_t fread(void* _Buffer, size_t _ElementSize, size_t _ElementCount, FILE* _Stream);
//성공한 읽기 횟수를 반환, 실패하면 지정된 읽기 횟수보다 작은 값을 반환