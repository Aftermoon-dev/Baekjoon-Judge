#include <stdio.h>

int main() {
	int one = 0, two = 0;
	scanf("%d %d", &one, &two);

	printf("%d\n", one * (two % 10));
	printf("%d\n", one * ((two / 10) % 10));
	printf("%d\n", one * ((two / 100) % 10));
	printf("%d", (one * (two % 10)) + (one * ((two / 10) % 10) * 10) + (one * ((two / 100) % 10)) * 100);
	return 0;
}