#include<stdio.h>
#include<stdlib.h>

void fun_one_depth_static(int* c) {
	printf("one_depth_static => ");
	while (1) {
		if (*c == NULL) break;
		printf("%d ", *c);
		c++;
	}
	printf("\n");
}

void fun_two_depth_static2(int (*arr)[6], int x, int y) {
	printf("fun_two_depth_static2 => \n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void fun_two_depth_static(int* f, int* s, int* t) {
	printf("fun_two_depth_static => \n");
	while (1) {
		if (*f == NULL) break;
		printf("%d ", *f);
		f++;
	}
	printf("\n");
	while (1) {
		if (*s == NULL) break;
		printf("%d ", *s);
		s++;
	}
	printf("\n");
	while (1) {
		if (*t == NULL) break;
		printf("%d ", *t);
		t++;
	}
	printf("\n");
}

void doublePonint(int** p, int x, int y) {
	printf("doublePonint\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
	printf("\n");
}

int main() {

	int one_depth_static[6] = { 1, 3, 4 };
	fun_one_depth_static(one_depth_static);

	int two_depth_static[3][6] = { {1, 2, 3 }, { 4, 5, 6 } , { 7, 8, 9 } };
	fun_two_depth_static2(two_depth_static , 3, 3);
	//fun_two_depth_static(two_depth_static[0], two_depth_static[1], two_depth_static[2]);

	// 3* 2

	// *->  1 2
	// *->  3 4
	// *->  5 6
	int doublePointSize = sizeof(int*) * 3;
	int** p = (int**) malloc(doublePointSize);

	for (size_t i = 0; i < doublePointSize / (sizeof(int*)) ; i++)
	{
		if(p != NULL) 
		{ 
			p[i] = (int*)malloc(sizeof(int) * 2);
			if (p[i] != NULL)
				for (unsigned int j = 0; j < 2; j++ ) {
				
						p[i][j] = (i+1) * (j+1);
				}
		}

	}

	doublePonint(p, 3, 2);

	if (p != NULL) 
	{
		for (size_t i = 0; i < doublePointSize / (sizeof(int*)); i++)
		{
				free(p[i]);
		}
		free(p);
	}

	return 0;
}
