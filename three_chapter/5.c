#include <stdio.h>

int main()
{
    float ft = 1.234567890123456789;
    double db = 1.234567890123456789;

    printf("float형 변수의 값 : %.2f\n", ft);
    printf("double형 변수의 값 : %.2lf\n", db);

    return 0;
}