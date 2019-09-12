#include <stdio.h>

int main() {
	int num = 0, max = 0, idx = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &num);
		if (i == 0) {
			max = num;
		} 
		else {
			if (max < num) {
				idx = i;
				max = num;
			}
		}
	}

	printf("%d\n%d", max, idx+1);
	return 0;
}