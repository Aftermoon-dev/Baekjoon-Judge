#include <stdio.h>
int num1 = 0;
int main(void) {
	scanf("%d", &num1);
	for(int i=1; i<=num1; i++) {
		printf("%d\n", i);
	}
	return 0;
}