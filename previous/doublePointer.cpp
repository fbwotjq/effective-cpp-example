#include<stdio.h>

int main() {
	const char* ptrArray[3] = { {"Korea"}, {"Seoul"}, {"true!"} };
	printf("ptrArray[0]의 주소        (&ptrArray[0]) = %p\n",  &ptrArray[0]);
	printf("ptrArray[0]의 값          ( ptrArray[0]) = %d\n",   ptrArray[0]);
	printf("ptrArray[0]의 주소        ( ptrArray[0]) = %p\n",   ptrArray[0]);
	printf("ptrArray[0]의 참조값      (*ptrArray[0]) = %c\n",  *ptrArray[0]);
	printf("ptrArray[0]의 참조 문자열 ( ptrArray[0]) = %s\n\n", ptrArray[0]);
	
	printf("ptrArray[1]의 주소        (&ptrArray[1]) = %p\n",  &ptrArray[1]);
	printf("ptrArray[1]의 값          ( ptrArray[1]) = %d\n",   ptrArray[1]);
	printf("ptrArray[1]의 주소        ( ptrArray[1]) = %p\n",   ptrArray[1]);
	printf("ptrArray[1]의 참조값      (*ptrArray[1]) = %c\n",  *ptrArray[1]);
	printf("ptrArray[1]의 참조 문자열 ( ptrArray[1]) = %s\n\n", ptrArray[1]);

	printf("ptrArray[2]의 주소        (&ptrArray[2]) = %p\n",  &ptrArray[2]);
	printf("ptrArray[2]의 값          ( ptrArray[2]) = %d\n",   ptrArray[2]);
	printf("ptrArray[2]의 주소        ( ptrArray[2]) = %p\n",   ptrArray[2]);
	printf("ptrArray[2]의 참조값      (*ptrArray[2]) = %c\n",  *ptrArray[2]);
	printf("ptrArray[2]의 참조 문자열 ( ptrArray[2]) = %s\n\n", ptrArray[2]);

	const char **ptrptr = ptrArray;
	printf("ptrptr의 주소 (&ptrptr)           = %p\n", &ptrptr);
	printf("ptrptr의 값   ( ptrptr)           = %d\n", ptrptr);
	printf("ptrptr의 주소 ( ptrptr)           = %p\n", ptrptr);
	printf("ptrptr의 1차 참조값 (*ptrptr)     = %d\n", *ptrptr);
	printf("ptrptr의 1차 참조주소값 (*ptrptr) = %p\n", *ptrptr);
	printf("ptrptr의 2차 참조값 (**ptrptr)    = %c\n", **ptrptr);
	printf("ptrptr의 2차 참조문자열 (**ptrptr)= %s\n", *ptrptr);

	printf("*ptrArray[0]: %s", *ptrArray[0]);
	printf("**ptrptr: %s", **ptrptr);

	printf("*ptrArray[1]: %s", *ptrArray[1]);
	printf("**(ptrptr + 1): %s", **(ptrptr + 1));

	return 0;
}