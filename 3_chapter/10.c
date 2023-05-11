#include <stdio.h>

int main()
{
    char grade;
    char name[20];

    printf("학점 입력 : ");
    scanf("%c", &grade);
    printf("이름 입력 : ");
    // 배얄에 이름 문다열 입력은 &를 사용하지 않아도 된다.
    scanf("%s", name);
    printf("%s의 학점은 %c입니다.\n", name, grade);

    return 0;
}