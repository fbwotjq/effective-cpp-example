#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include <windows.h>

/* ��������� ũ�� */
#define size 4

/* ���� ���� ī��Ʈ */
#define life_count 100
#define B_W 87
#define S_W 119
#define B_A 65
#define S_A 97
#define B_D 68
#define S_D 100
#define B_S 83
#define S_S 115

/* ���� ���� ���� */
int game_over;
/**********************************************************

  * size�� 4�϶� �׽�Ʈ ���̽� 3�� �Դϴ�.
	���� ANS ���� �ִ� Ŀ�ǵ带 ������� �Է��Ͻø� �˴ϴ�.

***********************************************************/
void Test_one(int puzzle[][4]) { //ANS : W W A A A
	puzzle[0][0] = 15;	puzzle[0][1] = 14;	puzzle[0][2] = 13;	puzzle[0][3] = 12;
	puzzle[1][0] = 0;	puzzle[1][1] = 10;	puzzle[1][2] = 9;	puzzle[1][3] = 8;
	puzzle[2][0] = 11;	puzzle[2][1] = 6;	puzzle[2][2] = 5;	puzzle[2][3] = 4;
	puzzle[3][0] = 7;	puzzle[3][1] = 3;	puzzle[3][2] = 2;	puzzle[3][3] = 1;
}
void Test_two(int puzzle[][4]) { //ANS : W A W D D W A A 
	puzzle[0][0] = 15;	puzzle[0][1] = 14;	puzzle[0][2] = 0;	puzzle[0][3] = 12;
	puzzle[1][0] = 11;	puzzle[1][1] = 10;	puzzle[1][2] = 13;	puzzle[1][3] = 9;
	puzzle[2][0] = 7;	puzzle[2][1] = 5;	puzzle[2][2] = 4;	puzzle[2][3] = 8;
	puzzle[3][0] = 3;	puzzle[3][1] = 6;	puzzle[3][2] = 2;	puzzle[3][3] = 1;
}
void Test_three(int puzzle[][4]) { //ANS : A S S D W A S D W A A W W A 
	puzzle[0][0] = 11;	puzzle[0][1] = 15;	puzzle[0][2] = 13;	puzzle[0][3] = 12;
	puzzle[1][0] = 14;	puzzle[1][1] = 6;	puzzle[1][2] = 10;	puzzle[1][3] = 8;
	puzzle[2][0] = 0;	puzzle[2][1] = 7;	puzzle[2][2] = 9;	puzzle[2][3] = 4;
	puzzle[3][0] = 3;	puzzle[3][1] = 2;	puzzle[3][2] = 5;	puzzle[3][3] = 1;
}


/**********************************************************
* ��������� global ������ �������� �ʱ�ȭ ���ش�.
  ��ĭ�� ��� 0���� �ʱ�ȭ ���ش�.
* input 	: (int [][]) ���������
* return 	: none
***********************************************************/
void init(int puzzle[][size])
{
	int i, j;
	game_over = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			puzzle[i][j] = size * size - 1 - size * i - j;
	}
}

/**********************************************************
* ����������� ������ش�.
* input 	: (int [][]) ���������
* return 	: none
***********************************************************/
void printPuzzle(int puzzle[][size])
{
	// TODO	
	for (int i = 0; i < size ; i++) {
		for (int j = 0; j < size; j++) {
			if (puzzle[i][j] == 0) {
				printf("  |", puzzle[i][j]);
			}
			else {
				printf("%2d|", puzzle[i][j]);
			}
			
			if(j == size - 1)
				printf("\n");
		}
	}
}


/**********************************************************
* ��������� clear�Ǿ����� üũ�Ѵ�.
* input 	: (int [][]) ���������
* return 	: none
***********************************************************/
void checkPuzzle(int puzzle[][size])
{
	int target = (size * size) - 1;
	// TODO	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (puzzle[i][j] == target) {
				target--;
			}
			else {
				break;
			}
		}
	}

	if (target == -1) {
		game_over = true;
	}
	
}

/**********************************************************
* ��������ǿ��� ��ĭ�� ��ġ�� ã�´�.
* input 	: (int [][]) ���������
* return 	: none
***********************************************************/
int find_0_loc(int puzzle[][size])
{
	// TODO
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (puzzle[i][j] == 0) {
				//printf("i: %d, j: %d", i, j);
				return (i * size) + (j + 1);
			}
		}
	}
	return 0;
}

/**********************************************************
* �ܼ�â�� �Է��ϴ� key�� ���� �޾ƿ´�.(Enter �ʿ����)
* input 	: none
* return 	: (int) �Է¹��� key
***********************************************************/
int getch(void)
{
	// TODO
	char input = getch();
	return (int) input;
}

/**********************************************************
* command�� ���� ������ �����Ѵ�.
  'w' 'W' - ��ĭ�� �Ʒ���
  'a' 'A' - ��ĭ�� ����������
  's' 'S' - ��ĭ�� ����
  'd' 'D' - ��ĭ�� ��������
* input 	: (int [][]) ���������
			  (int) ��������ǿ��� ��ĭ�� ��ġ
			  (int) �Է¹��� key�� ���� command
* return 	: (int) command�� ���� ���� ���࿩��
***********************************************************/
int move_to(int puzzle[][size], int loc, int command)
{
	//TODO	
	// 1 2 3 4 5 
	// 0 0 0 0 1
	// 0 1 2 3 0
	int temp = loc;
	int depts1 = 0;
	int depts2 = 0;
	while (true) {
		if (temp > size) {
			depts1++;
			temp = temp - size;
		}
		else {
			depts2 = temp - 1;
			break;
		}
	}

	int changeDepts1 = 0;
	int changeDepts2 = 0;

	if (command == B_W || command == S_W) {
		changeDepts1 = depts1 + 1;
		changeDepts2 = depts2;
	} else if (command == B_A || command == S_A) {
		changeDepts1 = depts1;
		changeDepts2 = depts2 + 1;
	} else if (command == B_S || command == S_S) {
		changeDepts1 = depts1 - 1;
		changeDepts2 = depts2;
	} else if (command == B_D || command == S_D) {
		changeDepts1 = depts1;
		changeDepts2 = depts2 - 1;
	}
	//printf("loc: %d, command: %d, depts1: %d, depts2: %d, changeDepts1:%d, changeDepts2: %d\n", loc, command, depts1, depts2, changeDepts1, changeDepts2);

	if (changeDepts1 >= 0 && changeDepts1 < 4 && changeDepts2 >= 0 && changeDepts2 < 4) {
		int swap = puzzle[depts1][depts2];
		puzzle[depts1][depts2] = puzzle[changeDepts1][changeDepts2];
		puzzle[changeDepts1][changeDepts2] = swap;
	}
	
	return 0;
}

/**********************************************************
* ����������� �����ϰ� ���´�.
  int iter�� ������ �õ��� Ƚ���̴�.
* input 	: (int [][]) ���������
* return 	: none
***********************************************************/
void shuffle(int puzzle[][size])
{
	int r, l;
	int iter = 100;     /* �ʿ��Ƚ���� ������ ���鼭 �׽�Ʈ �غ����� */
	while (iter)
	{
		iter--;
		l = find_0_loc(puzzle);
		r = rand() % 4;
		move_to(puzzle, l, r);
	}
}

/**********************************************************
* getch()�Լ��� �Է¹���  key�� ������ �ش��ϴ� key ���� return ���ش�.
  'w', 'W', 'a', 'A', 's', 'S', 'd', 'D' key�� ������ �ٸ� key�� �Է����� ���ý� -1�� return �Ѵ�.
* input 	: none
* return 	: (int) getch()�� �Է¹��� key�� ��
***********************************************************/
int GetCommand()
{
	// TODO	
	char input = _getch();
	//printf("DEBUG::GetCommand :: input is %d\n", input);        
	if (
		input != B_W && input != S_W && input != B_A && input != S_A && 
		input != B_D && input != S_D && input != B_S && input != S_S
	) {
		return -1;
	}
	return input;
}


/**********************************************************
* ������� ���۽� ����Ǹ�, ����������� �ʱ�ȭ�ϰ�,
  �Է¹��� command�� ���� ������ �����Ѵ�.
  life�� 0�� �ǰų�, ������ clear���� �� ���α׷��� �����Ѵ�.

* input 	: none
* return 	: 0
***********************************************************/
int main(void)
{
	int puzzle[size][size]; /* ũ�Ⱑ size * size�� ���������*/
	int life = life_count; /* ���� ���� ī��Ʈ */
	int command = -1;
	int x = 3, y = 3;
	// �ʿ��� ������ �����Ӱ� �߰� ����


	srand(time(NULL));		/* ������ �����ϱ� ���� ���� */
	init(puzzle);			/* ��������� �ʱ�ȭ */
	//shuffle(puzzle);		/* ��������� ���� */

	//Test_one(puzzle);     /* ppt�� �����ִ� test case */ 
	//Test_two(puzzle);     /* shuffle�� �ϼ��Ǳ��� ��� */
	//Test_three(puzzle); 

	while (!game_over)
	{
		
	//	system("cls");
		/*
		   TODO LIST

		   ��������ǿ��� ��ĭ�� ã�´�. ( find_0_loc() )
		   key�� ���� ������ �����Ѵ�.
		*/

		printPuzzle(puzzle); /* ��������� �׸��� */
		printf("up    : w\nleft  : a\ndown  : s\nright : d\n");
		printf("Life : %d\n", life);
		printf("Press Command...\n");
		
		/*
			�Է��� �Ͼ������ ����������� ���Ӱ� �׸���.
		*/
		command = GetCommand();
		if (command != -1) {
			life--;															// �߰� 
			int loc = find_0_loc(puzzle);
			move_to(puzzle, loc, command);
			checkPuzzle(puzzle);
		}
		/*
			TODO LIST

			��������� ���� ������ üũ�Ѵ�.
		*/

	}
	/*
		������� ��� ���
	*/
	printf("\n\n\n\n\n");

	if (game_over) {
		printPuzzle(puzzle);
		printf("      Success!\n\n\n");
	} else
		if (life <= 0)
			printf("      Fail!\n\n\n");
		else
			printf("      Success!\n\n\n");

	return 0;
}
