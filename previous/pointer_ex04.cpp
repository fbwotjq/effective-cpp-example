#include<stdio.h>

int main() {

	char string1[18] = "Dreams come true!";

	char *ptr1;
	char *temp;

	ptr1 = string1;
	temp = string1;
	printf("string1�� �ּ� = %p, ptr1�� �ּ� = %p \n", string1, ptr1);

	printf("string1 = %s \n", string1);
	printf("ptr1 = %s \n", ptr1);

	for(int i = 0 ; i < 6 ; i++) temp++;

	printf("ptr1 = %s \n", temp);
	printf("string1 = %s \n\n", &string1[7]);

	temp = string1;
	for (int i = 0; i < (sizeof(string1) / sizeof(char)) - 1 ; i++) temp++;

	for (int i = 0; i < (sizeof(string1) / sizeof(char)) - 1; i++) {
		temp--;
		printf("%c", *temp);
	}
	printf("\n\nstring1 = %s\n", string1);
	printf("ptr1 = %s\n", ptr1);

	temp = string1;

	*temp = 'P';
	temp++;
	*temp = 'e';
	temp++;
	*temp = 'a';
	temp++;
	*temp = 'c';
	temp++;
	*temp = 'e';
	temp++;
	*temp = 's';

	printf("string1 = %s\n", string1);

	/*
	http://jeremyko.blogspot.com/2012/08/lvalue-rvalue.html
	��� ���� ��� �κ��� �ּҰ��� Ÿ�Կ� �´� �ּҰ��� ����� ������ ���� ����. (��Ʈ�� �ش� ����Ʈ ��ŭ)
	�ٸ� �����Ͱ� �ƴ� �Ϲ� ������ ���� �ּҰ��� �����ϱ� ���� ����� ���� �� ���̴�. 
	-- ������ ���� 
	char test[50] = "abc"; ==> "abc"�� ���� test��� �迭�� �ش� �ּҿ� 'a', 'b', 'c' �� �� �迭�� Ư�� ������ �־��ش�. test�� �ּҰ��� �ٲܼ� ����.
	test = "cba";
	test[0] = 'd';

	const char* t = "abc"; ==> "abc"�� �޸� ��� �����ѵ� �ű⿡ ù�ּҸ� �����ٻ��̴�. "abc"�� �Ϻδ� �ٲܼ� ����.
	t = "cba";
	t[0] = 'd';
	*/

	return 0;
}