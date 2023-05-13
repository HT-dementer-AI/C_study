#include <stdio.h>
/*
for(초기화식; 조건식; 증감식){

}
*/

int main()
{

    int a = 1;
    int i;
    for (i = 0; i < 3; i++)
    {
        a = a * 2;
    }
    printf("%d", a);
    return 0;
}