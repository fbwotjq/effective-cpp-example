#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include <windows.h>

/* 퍼즐게임판 크기 */
#define size 4

/* 게임 생명 카운트 */
#define life_count 100
#define B_W 87
#define S_W 119
#define B_A 65
#define S_A 97
#define B_D 68
#define S_D 100
#define B_S 83
#define S_S 115

/* 게임 종료 조건 */
int game_over;
/**********************************************************

  * size가 4일때 테스트 케이스 3개 입니다.
	답은 ANS 옆에 있는 커맨드를 순서대로 입력하시면 됩니다.

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
* 퍼즐게임의 global 변수와 게임판을 초기화 해준다.
  빈칸의 경우 0으로 초기화 해준다.
* input 	: (int [][]) 퍼즐게임판
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
* 퍼즐게임판을 출력해준다.
* input 	: (int [][]) 퍼즐게임판
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
* 퍼즐게임이 clear되었는지 체크한다.
* input 	: (int [][]) 퍼즐게임판
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
* 퍼즐게임판에서 빈칸의 위치를 찾는다.
* input 	: (int [][]) 퍼즐게임판
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
* 콘솔창에 입력하는 key의 값을 받아온다.(Enter 필요없음)
* input 	: none
* return 	: (int) 입력받은 key
***********************************************************/
int getch(void)
{
	// TODO
	char input = getch();
	return (int) input;
}

/**********************************************************
* command에 대한 동작을 수행한다.
  'w' 'W' - 빈칸을 아래로
  'a' 'A' - 빈칸을 오른쪽으로
  's' 'S' - 빈칸을 위로
  'd' 'D' - 빈칸을 왼쪽으로
* input 	: (int [][]) 퍼즐게임판
			  (int) 퍼즐게임판에서 빈칸의 위치
			  (int) 입력받은 key에 대한 command
* return 	: (int) command에 대한 동작 수행여부
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
* 퍼즐게임판을 랜덤하게 섞는다.
  int iter는 셔플을 시도할 횟수이다.
* input 	: (int [][]) 퍼즐게임판
* return 	: none
***********************************************************/
void shuffle(int puzzle[][size])
{
	int r, l;
	int iter = 100;     /* 필요시횟수를 변경해 가면서 테스트 해보세요 */
	while (iter)
	{
		iter--;
		l = find_0_loc(puzzle);
		r = rand() % 4;
		move_to(puzzle, l, r);
	}
}

/**********************************************************
* getch()함수로 입력받은  key를 가져와 해당하는 key 값을 return 해준다.
  'w', 'W', 'a', 'A', 's', 'S', 'd', 'D' key를 제외한 다른 key가 입력으로 들어올시 -1을 return 한다.
* input 	: none
* return 	: (int) getch()로 입력받은 key의 값
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
* 퍼즐게임 시작시 실행되며, 퍼즐게임판을 초기화하고,
  입력받은 command에 대한 동작을 수행한다.
  life가 0이 되거나, 게임을 clear했을 시 프로그램을 종료한다.

* input 	: none
* return 	: 0
***********************************************************/
int main(void)
{
	int puzzle[size][size]; /* 크기가 size * size인 퍼즐게임판*/
	int life = life_count; /* 게임 생명 카운트 */
	int command = -1;
	int x = 3, y = 3;
	// 필요한 변수는 자유롭게 추가 가능


	srand(time(NULL));		/* 난수를 생성하기 위한 설정 */
	init(puzzle);			/* 퍼즐게임판 초기화 */
	//shuffle(puzzle);		/* 퍼즐게임판 섞기 */

	//Test_one(puzzle);     /* ppt에 나와있는 test case */ 
	//Test_two(puzzle);     /* shuffle이 완성되기전 사용 */
	//Test_three(puzzle); 

	while (!game_over)
	{
		
	//	system("cls");
		/*
		   TODO LIST

		   퍼즐게임판에서 빈칸을 찾는다. ( find_0_loc() )
		   key에 대한 동작을 수행한다.
		*/

		printPuzzle(puzzle); /* 퍼즐게임판 그리기 */
		printf("up    : w\nleft  : a\ndown  : s\nright : d\n");
		printf("Life : %d\n", life);
		printf("Press Command...\n");
		
		/*
			입력이 일어날때마다 퍼즐게임판을 새롭게 그린다.
		*/
		command = GetCommand();
		if (command != -1) {
			life--;															// 추가 
			int loc = find_0_loc(puzzle);
			move_to(puzzle, loc, command);
			checkPuzzle(puzzle);
		}
		/*
			TODO LIST

			퍼즐게임의 종료 조건을 체크한다.
		*/

	}
	/*
		퍼즐게임 결과 출력
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
