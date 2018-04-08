#include <stdio.h>
int num1, num2, num3;
int main(void) {
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    printf("%d\n", (num1+num2)%num3);
    printf("%d\n", (num1%num3+num2%num3)%num3);
    printf("%d\n", (num1*num2)%num3);
    printf("%d", (num1%num3*num2%num3)%num3);
}
