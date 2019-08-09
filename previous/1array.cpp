#include<stdio.h>

int main() {

	int score[3] = {91,86,97};
	char rank[3] = { 'A', 'B', 'C' };
	int length = sizeof(score) / sizeof(int);

	printf("*** 학년별 취득 학점 ***\n");
	for (int i = 0; i < length ; i++) {
		printf("%d학년 : 총점 = %d, 등급 = %c\n", i, score[i], rank[i]);
	}

	return 0;

}