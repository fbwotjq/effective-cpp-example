#include<stdio.h>

int main() {
	int i = 10;
	int j = 20;
	printf("i�� �޸� �ּ�(&i) = %p\n", &i);
	printf("j�� �޸� �ּ�(&j) = %p\n", &j);

	int* ptr;
	printf("<< ptr = &i ���� >>\n");
	ptr = &i;
	printf("ptr�� �޸� �ּ�(&ptr) = %p\n", &ptr);
	printf("ptr�� ��(ptr) = %p\n", ptr);
	printf("ptr�� ������(*ptr) = %d\n", *ptr);

	printf("<< ptr = &j ���� >>\n");
	ptr = &j;
	printf("ptr�� �޸� �ּ�(&ptr) = %p\n", &ptr);
	printf("ptr�� ��(ptr) = %p\n", ptr);
	printf("ptr�� ������(*ptr) = %d\n", *ptr);

	printf("<< i =* ptr ���� >>\n");
	i = *ptr;
	printf("i�� �� %d", i);
	return 0;
}