#include <stdio.h>

int main()
{
    int ary[5];
    int num = 10;
    for (int i = 0; i < 3; i++)
    {
        ary[i] = num;
        num += 10;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d", ary[i]);
    }
    return 0;
}