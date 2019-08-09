#include<stdio.h>
#include<stdlib.h>

//void showAry(int p[]) 
void showAry(int* p, int length)
{
	if (p != nullptr) {
		for (unsigned int i = 0; i < length; i++)
		{
			printf("%d\n", p[i]);
		}
	}
}

int main() {
	const int MAX = 5;
	int ary1[MAX] = { 1,2,3,4,5 };	
	showAry(ary1,MAX);

	int* p_ary1 = (int*)malloc(sizeof(int) * MAX);
	if (p_ary1 != nullptr) {
		for (size_t i = 0; i < MAX; i++)
		{
			//p_ary1[i] = i + 1;
			*(p_ary1 + i) = i + 1;
		}	
	}


	showAry(p_ary1, MAX);
	free(p_ary1);


	int ary2[2][3] = {
		{1,2,3},{4,5,6}
	};

	int (*p_ary2)[3] = ary2;
	return 0;
}