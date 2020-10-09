#include <stdio.h>

int cal[1000001];

#define min(x, y) x > y ? y : x;

int main() {
	int n;
	scanf("%d", &n);

	cal[1] = 0;
	for (int i = 2; i <= n; i++) {
		cal[i] = cal[i - 1] + 1;
		if (i % 2 == 0) {
			cal[i] = min(cal[i], cal[i / 2] + 1);
		}
		if (i % 3 == 0) {
			cal[i] = min(cal[i], cal[i / 3] + 1);
		}
	}

	printf("%d", cal[n]);
	return 0;
}