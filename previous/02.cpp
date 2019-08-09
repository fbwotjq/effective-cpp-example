#include<stdio.h>

#define MAX "30\n"
#define MIN "10\n"

#define KO 1
#define EN 2
#define LN KO

// https://m.blog.naver.com/PostView.nhn?blogId=s2kiess&logNo=30190492715&proxyReferer=https%3A%2F%2Fwww.google.com%2F
// https://eskeptor.tistory.com/130
// https://programfrall.tistory.com/20

int main() {
	int a = 0;

#if LN == EN
	printf(MAX);
#else
	printf(MIN);
#endif 

	

	if (a > 10)
	{
		printf("a");
	}

	for (int i = 0; i < 10; i++) {
		printf("Hello, world!\n");
	}

	return 0;
}