#include <stdio.h>

int main() {
	int p = 0, num[3] = { 0 };

	for (int i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}

	if (num[2] - num[1] != 0)
	{
		int result = num[0] / (num[2] - num[1]) + 1;

		if (result >= 0) {
			printf("%d", result);
		}
		else {
			printf("-1");
		}
	}
	else {
		printf("-1");
	}


	return 0;
}