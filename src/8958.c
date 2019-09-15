#include <stdio.h>
#include <stdlib.h>

int main() {
	int num = 0;
	char string[80] = "";
	
	scanf("%d", &num);
	int *score = malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		scanf(" %s", string);
		int ocount = 0;
		score[i] = 0;
		for (int j = 0; j < strlen(string); j++) {
			if (string[j] == 'O') {
				if (ocount == 0){
					score[i]++;
				}
				else {
					score[i] += ocount + 1;
				}	
				ocount++;
			}
			else {
				ocount = 0;
			}
		}
	}

	for (int k = 0; k < num; k++) {
		printf("%d\n", score[k]);
	}

	free(score);

	return 0;
}