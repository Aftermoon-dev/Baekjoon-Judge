#include <stdio.h>

int main() {
	int money;
	int change = 0;
	scanf("%d", &money);
	money = 1000 - money;

	while (money > 0) {
		if (money - 500 >= 0) {
			money -= 500;
			change++;
		}
		else if (money - 100 >= 0) {
			money -= 100;
			change++;
		}
		else if (money - 50 >= 0) {
			money -= 50;
			change++;
		}
		else if (money - 10 >= 0) {
			money -= 10;
			change++;
		}
		else if (money - 5 >= 0) {
			money -= 5;
			change++;
		}
		else if (money - 1 >= 0) {
			money -= 1;
			change++;
		}
	}

	printf("%d\n", change);
	return 0;
}