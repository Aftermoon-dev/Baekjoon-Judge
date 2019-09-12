#include <stdio.h>

int main() {
	int h = 0, m = 0;
	scanf("%d %d", &h, &m);

	if (m >= 45) {
		m -= 45;
	}
	else if (m < 45) {
		if (h == 0) {
			h = 24;
		}
		
		m = 60 + (m - 45);
		h -= 1;
	}

	printf("%d %d", h, m);
	return 0;
}