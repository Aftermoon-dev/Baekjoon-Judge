#include <stdio.h>
#include <string.h>

int main() {
	char string[1000000] = " ";
	int size = 0;
	gets(string);

	// strtok - ��� ���ڿ����� ���� ���ڿ��� �������� ���ڿ��� ������. ������ ������ NULL�� return�Ѵ�.
	// strtok(��� ���ڿ�, ���� ���ڿ�)
	// PHPó�� �˾Ƽ� �������ִ°� �ƴϹǷ�, while�� ���� NULL�� �ɶ����� �������־�� �Ѵ�.
	char* ptr = strtok(string, " ");

	while (ptr != NULL) {
		size++;
		ptr = strtok(NULL, " ");
	}
	
	printf("%d", size);
	return 0;
}