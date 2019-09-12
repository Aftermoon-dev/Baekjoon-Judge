#include <stdio.h>

int main() {
	int Ary[8] = { 0 }, num = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &Ary[i]);

		if (i + 1 == Ary[i]) {
			num++;
		}
	}

	if (num == 8) {
		printf("ascending");
	}
	else {
		num = 0;

		for (int i = 0; i < 8; i++) {
			if (8 - i == Ary[i]) {
				num++;
			}
		}

		if (num == 8) {
			printf("descending");
		}
		else printf("mixed");
	}
	return 0;
}