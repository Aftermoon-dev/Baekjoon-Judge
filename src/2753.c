#include <stdio.h>

int main() {
	int year = 0;
	int result = 0;
	scanf("%d", &year);

	if (year % 4 == 0) {
		if (year % 100 != 0 || year % 400 == 0) {
			result = 1;
		}
		else result = 0;
	}
	else {
		result = 0;
	}

	printf("%d", result);
	return 0;
}