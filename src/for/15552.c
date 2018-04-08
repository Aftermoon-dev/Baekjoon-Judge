#include <stdio.h>

int count, num1, num2;

int main(void) {
    scanf("%d", &count);
    for(int i=0; i<count; i++) {
        scanf("%d %d", &num1, &num2);
        printf("%d\n", num1+num2);
    }
    return 0;
}
