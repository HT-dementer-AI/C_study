#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a = 10, b = 20;
    int result;

    result = sum(a, b);

    printf("%d", result);
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}