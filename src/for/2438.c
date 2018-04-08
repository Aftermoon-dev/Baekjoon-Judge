#include <stdio.h>
int num1 = 0;
int main(void) {
	scanf("%d", &num1);
	for(int i=1; i<=num1; i++) {
		for(int t=1; t<i; t++) {
			printf("*");
		}
		printf("*\n");
	}
	return 0;
}