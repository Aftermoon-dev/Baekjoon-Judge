#include <stdio.h>
#include <string.h>

int main() {
	char string[1000000] = " ";
	int size = 0;
	gets(string);

	// strtok - 대상 문자열에서 기준 문자열을 기준으로 문자열을 나눈다. 나눌수 없으면 NULL을 return한다.
	// strtok(대상 문자열, 기준 문자열)
	// PHP처럼 알아서 나누어주는게 아니므로, while을 통해 NULL이 될때까지 나누어주어야 한다.
	char* ptr = strtok(string, " ");

	while (ptr != NULL) {
		size++;
		ptr = strtok(NULL, " ");
	}
	
	printf("%d", size);
	return 0;
}