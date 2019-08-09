#include<stdio.h>



int main() {

	int temp;
	int b = 3;
	int a = 1;

	printf("before a, b -> %d, %d ==> ", a, b);

	temp = b;
	b = a;
	a = temp;
	printf("after a, b -> %d, %d\n", a, b);

	return 0;
}
