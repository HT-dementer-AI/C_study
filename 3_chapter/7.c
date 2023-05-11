#include <stdio.h>

// const를 사용하면 이후에는 값을 바꿀수 없으므로 선언과 동시에 초기화 해야 합니다.
int main()
{
    int income = 0;
    const double tax_rate = 0.12;
    double tax;

    income = 456;
    tax = income * tax_rate;
    printf("세금은  : %.1lf입니다.\n", tax);

    return 0;
}