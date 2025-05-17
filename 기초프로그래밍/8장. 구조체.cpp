#include <stdio.h>

struct Gameinfo{
	char* name;
	int year;
	int price;
	char* company;

};

int main(void)
{
	char* name = "나도게임";
	int year = 2023;
	int price = 50;
	char* company = "나도 회사";

	char* name2 = "너도게임";
	int year2 = 2023;
	int price2 = 100;
	char* company2 = "너도 회사";

	//구조체 사용
	struct Gameinfo gameinfo1;
	gameinfo1.name = "나도게임";
	gameinfo1.year = 2023;
	gameinfo1.price = 50;
	gameinfo1.company = "나도회사";

	printf("--게임 출시 정보--\n");
	printf("--게임명: %s\n", gameinfo1.name);
	printf("--발매년도: %d\n", gameinfo1.year);
	printf("--가격: %d\n", gameinfo1.price);
	printf("--제작사: %s\n", gameinfo1.company);

	//구조체를 배열처럼 초기화
	struct Gameinfo gameinfo2 = { "너도게임",2023,50,"너도회사" };
	printf("--또 다른 게임 출시 정보--\n");
	printf("--게임명: %s\n", gameinfo2.name);
	printf("--발매년도: %d\n", gameinfo2.year);
	printf("--가격: %d\n", gameinfo2.price);
	printf("--제작사: %s\n", gameinfo2.company);
	// 구조체 배열

	struct Gameinfo gameArray[2] = {
		{"나도게임",2023,50,"나도회사"} ,
		{"너도게임", 2023, 50, "너도회사"}

	};

	//구조체 포인터
	struct Gameinfo* gamePtr;//미션맨
	gamePtr = &gameinfo1;
	/*printf("\n\n--미션맨의 게임 출시 정보--\n\n");
	printf("--게임명: %s\n", (*gamePtr).name); //*ptr
	printf("--발매년도: %d\n",(*gamePtr).year);
	printf("--가격: %d\n", (*gamePtr).price);
	printf("--제작사: %s\n", (*gamePtr).company);*/

	printf("\n\n--미션맨의 게임 출시 정보--\n\n");
	printf("--게임명: %s\n", gamePtr->name); //*ptr
	printf("--발매년도: %d\n", gamePtr->year);
	printf("--가격: %d\n", gamePtr->price);
	printf("--제작사: %s\n", gamePtr->company);
	
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3;//int i =3 
	실수 실수변수 = 3.23f;
	printf("정수변수;%d, 실수변수:%.2f", 정수변수, 실수변수);

	typedef struct Gameinfo 게임정보;
	게임정보 game1;
	game1.name = "한글 게임";
	game1.year = 2015;

	
	return 0;



}