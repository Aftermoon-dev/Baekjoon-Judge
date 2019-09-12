#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int num1, num2, result, i;

int main(void) {
    scanf("%d", &num1);

    char str[num1];
    scanf("%s", str);

    while(i < strlen(str)) {
        num2 += str[i] - '0';
        i++;
    }

    printf("%d", num2);
    return 0;
}
