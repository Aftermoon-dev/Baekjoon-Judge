long long sum(int* a, int n) {
	long long answer = 0;
	for (int i = 0; i < n; i++) {
		answer += a[i];
	}
	return answer;
}