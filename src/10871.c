#include <stdio.h>

int num1, num2, result;
int num3[10001];

int main(void) {
    scanf("%d %d", &num1, &num2);

    for(int i=0; i<num1; i++) {
        scanf("%d", &num3[i]);

        if(num2 > num3[i]) {
            printf("%d ", num3[i]);
        }
    }
    return 0;
}
