#include <stdio.h>
int num1, num2;
int main(void) {
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("%.9f", (double) num1 / (double) num2);
}