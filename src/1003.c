#include <stdio.h>

int cal[41][2];
int main() {
	int T; 
	scanf("%d", &T);

	cal[0][0] = 1;
	cal[0][1] = 0;
	cal[1][0] = 0;
	cal[1][1] = 1;
	for (int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);

		for (int j = 2; j <= N; j++) {
			cal[j][0] = cal[j - 2][0] + cal[j - 1][0];
			cal[j][1] = cal[j - 2][1] + cal[j - 1][1];
		}

		printf("%d %d\n", cal[N][0], cal[N][1]);
	}
}