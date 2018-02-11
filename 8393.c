#include <stdio.h>
int num1, result;
int main(void) {
	scanf("%d", &num1); 
	
	for(int i=1; i<=num1; i++) {
		result += i;
	}
	printf("%d", result);
	return 0;
}