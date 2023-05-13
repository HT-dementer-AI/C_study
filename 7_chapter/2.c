#include <stdio.h>

int get_num(void);

int main()
{
    int result;
    result = get_num();
    printf("%d", result);
    return 0;
}

int get_num()
{
    int num;
    num = scanf("%d", &num);
    return num;
}