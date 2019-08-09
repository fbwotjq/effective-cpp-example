#include<stdio.h>
#include<stdlib.h>

int main() {

	int step[9] = { 1,2,3,4,5,6,7,8,9 };

	printf("1 ~ 9 의 사이의 정수를 입력하세요: ");

	int input;

	scanf_s("%d", &input);

	for (int i = 0; i < sizeof(step) / sizeof(int) ; i++) {
		printf("%d * %d = %d\n", input, step[i], input * step[i]);
	}

	return 0;
}