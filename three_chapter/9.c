#include <stdio.h>

int main()
{
    double h;
    int age;

    printf("나이와 키를 입력하세요 : ");
    scanf("%d %lf", &age, &h);
    printf("나이는 %d살, 키는 %.1lfcm입니다\n", age, h);

    return 0;
}