#include <stdio.h>
// 조건문을 나중에 검사 do while

int main()
{
    int a = 1;
    do
    {
        a = a * 2;
    } while (a < 10);
    printf("%d", a);
    return 0;
}