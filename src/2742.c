#include <stdio.h>
int num1 = 0;
int main(void) {
	scanf("%d", &num1);
	while(num1 != 0) {
		printf("%d\n", num1);
		num1--;
	}
}