#include <stdio.h>
#include <string.h>

int onum, num1, num10, num, cycle;

int main(void) {
    scanf("%d", &onum);

    if(onum < 10) {
        onum *= 10;
    }

    num = onum;

    for(;;) {
        char numberchar = atoi(num);
        char cut
        strncpy(s)
        num10 = num % 10;
        num1 = num / 10;
        num =

        printf("%d", num);
        cycle++;
        if(num == onum) {
            break;
        }
    }

    printf("%d", cycle);
    return 0;
}
