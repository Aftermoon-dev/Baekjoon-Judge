#include <stdio.h>

int count;
double result, score[1001], num1;

int main(void) {
    scanf("%d", &count);

    for(int i=0; i<count; i++) {
        scanf("%d", &score[i]);
        if(i == 0 || num1 <= score[i]) {
            num1 = score[i];
        }
    }

    for(int t=0; t<count; t++) {
        result += score[t]/num1*100;
    }

    result = result/count;
    printf("%.2f", result);
    return 0;
}
