#include<stdio.h>
// #define TO_STRING(a) #a // ? �̰� ������ �𸣰��� Ȯ�� �ʿ� 

int main() {

	char c_array[100];
	int i_array[100];
	short s_array[100];
	long l_arrayl[100];

	/*
	printf("char c  ũ�� = %5d  : char  %10s  ũ�� = %5d\n", sizeof(char), TO_STRING(c_array), sizeof(c_array));
	printf("int i   ũ�� = %5d  : int   %10s  ũ�� = %5d\n", sizeof(int), TO_STRING(i_array), sizeof(i_array));
	printf("short s ũ�� = %5d  : short %10s  ũ�� = %5d\n", sizeof(short), TO_STRING(s_array), sizeof(s_array));
	printf("long l  ũ�� = %5d  : long  %10s  ũ�� = %5d\n", sizeof(long), TO_STRING(l_arrayl), sizeof(l_arrayl));
	*/
	printf("char c  ũ�� = %5d  : char  c_array  ũ�� = %5d\n", sizeof(char), sizeof(c_array));
	printf("int i   ũ�� = %5d  : int   i_array  ũ�� = %5d\n", sizeof(int), sizeof(i_array));
	printf("short s ũ�� = %5d  : short s_array  ũ�� = %5d\n", sizeof(short), sizeof(s_array));
	printf("long l  ũ�� = %5d  : long  l_arrayl  ũ�� = %5d\n", sizeof(long), sizeof(l_arrayl));

	return 0;

}