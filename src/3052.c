#include <stdio.h>

int main() {
	int num = 0, n[42] = { 0 }, result = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		n[num % 42] = 1;
	}

	for (int j = 0; j < 42; j++) {
		if (n[j] == 1) {
			result++;
		}
	}

	printf("%d", result);

	return 0;
}