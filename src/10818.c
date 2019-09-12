#include <stdio.h>
#include <stdlib.h>

int main() {
	int size = 0, num = 0;
	int min = 0, max = 0;
	scanf("%d", &size);

	for (int i = 0; i < size; i++) {
		scanf("%d", &num);

		if (i == 0) {
			min = num;
			max = num;
		}
		else {
			if (min > num) min = num;
			if (max < num) max = num;
		}
	}

	printf("%d %d", min, max);
	return 0;
}