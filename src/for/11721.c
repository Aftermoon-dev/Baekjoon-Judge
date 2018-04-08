#include <stdio.h>
#include <string.h>

char str[100];

int main(void) {
    scanf("%s", str);
    for(int i=1; i<=strlen(str); i++) {
       printf("%c", str[i-1]);
       if(i % 10 == 0) {
        printf("\n");
       }
    }
    return 0;
}
