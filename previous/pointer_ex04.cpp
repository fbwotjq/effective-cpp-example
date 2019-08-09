#include<stdio.h>

int main() {

	char string1[18] = "Dreams come true!";

	char *ptr1;
	char *temp;

	ptr1 = string1;
	temp = string1;
	printf("string1의 주소 = %p, ptr1의 주소 = %p \n", string1, ptr1);

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
	사실 씨언어에 모든 부분은 주소값과 타입에 맞는 주소값에 연결된 영역에 값이 들어간다. (비트로 해당 바이트 만큼)
	다만 포인터가 아닌 일반 변수는 쉽게 주소값에 접근하기 위한 방법을 만든 것 뿐이다. 
	-- 생각해 볼것 
	char test[50] = "abc"; ==> "abc"를 만들어서 test라는 배열에 해당 주소에 'a', 'b', 'c' 를 각 배열에 특정 영역에 넣어준다. test의 주소값을 바꿀수 없다.
	test = "cba";
	test[0] = 'd';

	const char* t = "abc"; ==> "abc"를 메모리 어딘가 저장한뒤 거기에 첫주소를 돌려줄뿐이다. "abc"에 일부는 바꿀수 없다.
	t = "cba";
	t[0] = 'd';
	*/

	return 0;
}