#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10001

int d(int);

int main() {
	int* check = malloc(sizeof(int) * MAX_SIZE);

	for (int i = 1; i <= MAX_SIZE; i++) {
		int temp = d(i);
		if (temp < 10000) {
			check[temp] = 1;
		}
	}

	for (int k = 1; k <= 9999; k++) {
		if (check[k] != 1) {
			printf("%d\n", k);
		}
	}
	
	free(check);
	return 0;
}

int d(int num) {
	int result = 0;
	int tmp = num;
	while (tmp != 0) {
		result += tmp % 10;
		tmp /= 10;
	}

	result += num;
	return result;
}