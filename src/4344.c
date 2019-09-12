#include <stdio.h>

int test, people, score[1000], average, passpeople;
double percent;

int main(void) {
    scanf("%d", &test);

    for(int i=0; i<test; i++) {
        average = 0;
        passpeople = 0;

        scanf("%d", &people);
        for(int t=0; t<people; t++) {
            scanf("%d", &score[t]);
            average += score[t];
        }
        average = average/people;
        for(int w=0; w<people; w++) {
                if(score[w] > average) {
                    passpeople++;
                }
        }

        percent = ((double) passpeople/ (double) people)*100.0;
        printf("%.3f%%\n", percent);
    }
    return 0;
}
