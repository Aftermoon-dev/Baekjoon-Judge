#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max(x,y) x > y ? x : y

int main() {
	char str1[1001];
	char str2[1001];

	scanf("%s", str1);
	scanf("%s", str2);

	int** cal = (int**) malloc(sizeof(int*) * (strlen(str2) + 1));
	for (int i = 0; i < strlen(str2) + 1; i++) {
		cal[i] = (int*)malloc(sizeof(int) * (strlen(str1) + 1));
	}

	int j = 0;
	for (j = 0; j < strlen(str2) + 1; j++) {
		cal[j][0] = 0;
	}

	for (j = 0; j < strlen(str1) + 1; j++) {
		cal[0][j] = 0;
	}
	
	for (int k = 1; k < strlen(str2) + 1; k++) {
		for (int m = 1; m < strlen(str1) + 1; m++) {
			if (str2[k-1] == str1[m-1]) {
				cal[k][m] = cal[k - 1][m - 1] + 1;
			}
			else {
				cal[k][m] = max(cal[k - 1][m], cal[k][m - 1]);
			}
		}
	}

	printf("%d\n", cal[strlen(str2)][strlen(str1)]);

	for (j = 0; j < strlen(str2) + 1; j++) {
		free(cal[j]);
	}
	free(cal);

	return 0;
}