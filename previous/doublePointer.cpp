#include<stdio.h>

int main() {
	const char* ptrArray[3] = { {"Korea"}, {"Seoul"}, {"true!"} };
	printf("ptrArray[0]�� �ּ�        (&ptrArray[0]) = %p\n",  &ptrArray[0]);
	printf("ptrArray[0]�� ��          ( ptrArray[0]) = %d\n",   ptrArray[0]);
	printf("ptrArray[0]�� �ּ�        ( ptrArray[0]) = %p\n",   ptrArray[0]);
	printf("ptrArray[0]�� ������      (*ptrArray[0]) = %c\n",  *ptrArray[0]);
	printf("ptrArray[0]�� ���� ���ڿ� ( ptrArray[0]) = %s\n\n", ptrArray[0]);
	
	printf("ptrArray[1]�� �ּ�        (&ptrArray[1]) = %p\n",  &ptrArray[1]);
	printf("ptrArray[1]�� ��          ( ptrArray[1]) = %d\n",   ptrArray[1]);
	printf("ptrArray[1]�� �ּ�        ( ptrArray[1]) = %p\n",   ptrArray[1]);
	printf("ptrArray[1]�� ������      (*ptrArray[1]) = %c\n",  *ptrArray[1]);
	printf("ptrArray[1]�� ���� ���ڿ� ( ptrArray[1]) = %s\n\n", ptrArray[1]);

	printf("ptrArray[2]�� �ּ�        (&ptrArray[2]) = %p\n",  &ptrArray[2]);
	printf("ptrArray[2]�� ��          ( ptrArray[2]) = %d\n",   ptrArray[2]);
	printf("ptrArray[2]�� �ּ�        ( ptrArray[2]) = %p\n",   ptrArray[2]);
	printf("ptrArray[2]�� ������      (*ptrArray[2]) = %c\n",  *ptrArray[2]);
	printf("ptrArray[2]�� ���� ���ڿ� ( ptrArray[2]) = %s\n\n", ptrArray[2]);

	const char **ptrptr = ptrArray;
	printf("ptrptr�� �ּ� (&ptrptr)           = %p\n", &ptrptr);
	printf("ptrptr�� ��   ( ptrptr)           = %d\n", ptrptr);
	printf("ptrptr�� �ּ� ( ptrptr)           = %p\n", ptrptr);
	printf("ptrptr�� 1�� ������ (*ptrptr)     = %d\n", *ptrptr);
	printf("ptrptr�� 1�� �����ּҰ� (*ptrptr) = %p\n", *ptrptr);
	printf("ptrptr�� 2�� ������ (**ptrptr)    = %c\n", **ptrptr);
	printf("ptrptr�� 2�� �������ڿ� (**ptrptr)= %s\n", *ptrptr);

	printf("*ptrArray[0]: %s", *ptrArray[0]);
	printf("**ptrptr: %s", **ptrptr);

	printf("*ptrArray[1]: %s", *ptrArray[1]);
	printf("**(ptrptr + 1): %s", **(ptrptr + 1));

	return 0;
}