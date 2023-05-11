#include <stdio.h>

// 소수점 형태의 실수를 지수형 태로 출력하고 싶을때 %le를 사용한다
int main()
{
    printf("%.1lf\n", 1e6);
    printf("%.7lf\n", 3.14e-5);
    printf("%le\n", 0.0000314);
    printf("%.2le\n", 0.0000314);

    return 0;
}