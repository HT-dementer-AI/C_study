#include <stdio.h>

// 아래와 같은 상황일때 const로 선언을 해주었다 이때 k 값을 변경할수 있지만 num값을 변경할수 없다.
int main()
{
    int a = 10, b = 15, num = 100, total;
    double avg;
    int *pa, *pb;
    int *pt = &total;
    double *pg = &avg;
    const int *k;

    k = &num;
    pa = &a;
    pb = &b;

    *pt = *pa + *pb;
    *pg = *pt / 2.0;

    printf("%d %d ", *pa, *pb);
    printf("%d ", *pt);
    printf("%.1lf ", *pg);
}