#include<stdio.h>

int main() {
	printf("test\r");
	printf("test\n");

	int a = 3;
	printf("%p\n", &a);
	a = 5;
	printf("%p\n", &a);
	return 0;
}