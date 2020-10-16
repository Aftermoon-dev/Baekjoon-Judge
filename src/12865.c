#include <stdio.h>
#include <stdlib.h>

#define MAX(x,y) x > y ? x : y

int main() {
	int m, g, i, j;
	int N;
	int K;
	scanf("%d %d", &N, &K);

	int* W = (int*)malloc(sizeof(int) * N);
	int* P = (int*)malloc(sizeof(int) * N);
	int** dp = (int**)malloc(sizeof(int*) * (N + 1));

	for (m = 0; m < N + 1; m++) {
		dp[m] = (int*)malloc(sizeof(int) * (K + 1));
	}

	for (g = 0; g < N; g++) {
		scanf("%d %d", &W[g], &P[g]);
	}

	for (i = 0; i < K + 1; i++) {
		dp[0][i] = 0;
	}
	for (i = 0; i < N + 1; i++) {
		dp[i][0] = 0;
	}

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= K; j++) {
			if (W[i-1] > j) dp[i][j] = dp[i - 1][j];
			else {
				dp[i][j] = MAX(dp[i - 1][j], dp[i - 1][j - W[i - 1]] + P[i - 1]);
			}
		}
	}

	printf("%d\n", dp[N][K]);

	free(W);
	free(P);
	for (m = 0; m < N + 1; m++) {
		free(dp[m]);
	}
	free(dp);

	return 0;
}