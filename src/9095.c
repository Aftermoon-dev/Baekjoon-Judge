#include <stdio.h>

int cal[11];

int main() {
	int T;
	scanf("%d", &T);

	cal[0] = 0;
	cal[1] = 1;
	cal[2] = 2;
	cal[3] = 4;

	for (int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);

		for (int i = 4; i <= N; i++) {
			cal[i] = cal[i - 1] + cal[i - 2] + cal[i - 3];
		}
		printf("%d\n", cal[N]);
	}
	return 0;
}