#include<stdio.h>

int main() {

	int score[3] = {91,86,97};
	char rank[3] = { 'A', 'B', 'C' };
	int length = sizeof(score) / sizeof(int);

	printf("*** �г⺰ ��� ���� ***\n");
	for (int i = 0; i < length ; i++) {
		printf("%d�г� : ���� = %d, ��� = %c\n", i, score[i], rank[i]);
	}

	return 0;

}