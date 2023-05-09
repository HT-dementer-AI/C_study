#include <stdio.h>

// int형은 연산의 기본단위로 컴퓨터에서 가장 빠르게 연산된다.
int main()
{
    short sh = 2344;
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345;

    printf("short형 변수 출력 : %d\n", sh);
    printf("int형 변수 출력 : %d\n", in);
    printf("long형 변수 출력 : %ld\n", ln);
    printf("long long 형변수 출력 : %lld\n", lln);

    return 0;
}