#include <stdio.h>

// 작은 따음표는 "문자" 상수로 처리하므로 'A'는 상수형 값이다.
// 이때 문자는 %c 문자열은 %s로 출력한다.

int main()
{
    printf("%c\n", 'A');
    printf("%s\n", "A");
    printf("%c은 %s입니다.\n", '1', "first");

    return 0;
}