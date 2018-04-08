#include <stdio.h>
int num1;
double result;
int main(void) {
	scanf("%d", &num1);
	
	if(num1 % 5  == 0) {
		result = num1/5;
	}
	else if(num1 % 5 == 1 || num1 % 5 == 3) {
		result = num1/5 + 1;
	}
	else if(num1 % 5 == 2 || num1 % 5 == 4) {
		result = num1/5 + 2;
	}
	
	if(num1 == 4 || num1 == 7) {
		result = -1;
	}
	
	printf("%.0f", result);
	return 0;
}