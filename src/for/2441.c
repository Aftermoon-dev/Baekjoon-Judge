#include <stdio.h>
int num1;
int main(void) {
	scanf("%d", &num1);
	for(int i=1; i<=num1; i++) {
		for(int w=1; w<i; w++) {
			printf(" ");
		}
		for(int t=i; t<=num1; t++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}