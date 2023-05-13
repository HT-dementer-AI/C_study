#include <stdio.h>
// 재귀함수
/*
int factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
위의 함수가 잆을때
스택:
factorial(4)
스택:
factorial(3)
factorial(4)
스택:
factorial(2)
factorial(3)
factorial(4)
스택:
factorial(1)
factorial(2)
factorial(3)
factorial(4)
스택:
factorial(2)
factorial(3)
factorial(4)
스택:
factorial(3)
factorial(4)
스택:
factorial(4)
스택:
(empty)
이렇게 실행됨
*/
void fruit(int cnt);

int main()
{
    fruit(1);
    return 0;
}

void fruit(int count)
{
    printf("apple\n");
    if (count == 7)
        return;
    fruit(count + 1);
    printf("jam");
}