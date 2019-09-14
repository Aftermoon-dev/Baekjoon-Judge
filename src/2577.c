#include <stdio.h>
#include <stdlib.h>

int main() {
	int num = 0, result = 0, size = 0, check[10] = { 0 };
	
	for (int i = 0; i < 3; i++) {
		scanf("%d", &num);
		if (i == 0) {
			result += num;
		}
		else {
			result *= num;
		}
	}

	int tmp = result;
	while (tmp != 0) {
		tmp /= 10;
		size++;
	}

	char* string = malloc(size+1);
	sprintf(string, "%d", result);

	for (int i = 0; i < size+1; i++) {
		check[string[i] - '0'] += 1;
	}

	for (int k = 0; k < 10; k++) {
		printf("%d\n", check[k]);
	}

	free(string);

	return 0;
}