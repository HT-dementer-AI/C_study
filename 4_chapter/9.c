#include <stdio.h>

// ,는 한번에 여러개의 수식을 라폐로 나열 해야할때 사용하는 연산자이다.
// 12번줄 같은경우 res에 ++b값이 저장된다 만약 괄호가 없을 경우 res에는 ++a값이 저장된다.
// = 연산자가 , 연산자보다 우선순위가 빠르다.

int main(void)
{
    int a = 10, b = 20;
    int res;

    res = (++a, ++b);

    printf("a: %d, b : %d\n", a, b);
    printf("res: %d\n", res);

    return 0;
}