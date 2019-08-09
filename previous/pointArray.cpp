#include<stdio.h>

int main() {
	char string[3][10] = {"Dreams", "come", "true!"};
	const char* ptr[3] = { {"Dreams"}, {"come"}, {"true!"} };

	for (int i = 0; i < 3 ; i++) {
		printf("%s", string[i]);
	}

	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("%s", ptr[i]);
	}
	

	return 0;
}