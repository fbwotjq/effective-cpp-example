#include<stdio.h>

int main() {
	int i = 10;
	int j = 20;
	printf("i의 메모리 주소(&i) = %p\n", &i);
	printf("j의 메모리 주소(&j) = %p\n", &j);

	int* ptr;
	printf("<< ptr = &i 실행 >>\n");
	ptr = &i;
	printf("ptr의 메모리 주소(&ptr) = %p\n", &ptr);
	printf("ptr의 값(ptr) = %p\n", ptr);
	printf("ptr의 참조값(*ptr) = %d\n", *ptr);

	printf("<< ptr = &j 실행 >>\n");
	ptr = &j;
	printf("ptr의 메모리 주소(&ptr) = %p\n", &ptr);
	printf("ptr의 값(ptr) = %p\n", ptr);
	printf("ptr의 참조값(*ptr) = %d\n", *ptr);

	printf("<< i =* ptr 실행 >>\n");
	i = *ptr;
	printf("i의 값 %d", i);
	return 0;
}