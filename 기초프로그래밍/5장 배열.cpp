//#include <stdio.h>

//int main(void)

	//배열
	/*int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;
	ㅁㅁㅁㅁㅁㅁㅁ
	printf("지하철 1호차에서 %d명이 타고 있습니다\n", subway_1);
	printf("지하철 2호차에서 %d명이 타고 있습니다\n", subway_2);
	printf("지하철 3호차에서 %d명이 타고 있습니다\n", subway_3);*/

	//여러 개의 변수를 함께, 동시에 생성
	/*int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d명이 타고 있습니다\n", i +1, subway_array[i]);*/

		//값 설정 방법
		//값은 초기화를 반드시 해야 한다. 
		/*
		int arr[10] ;
		for (int i = 0; i < 10; i++)
		{
			printf("%d\n", arr[i]);
		}*/
		//배열 크기는 항상 상수로 선언한다. 
		/*int size = 10;

		int arr[10] = { 1, 2 };
		for (int i = 0; i < 10; i++);
		{
			printf("%d\n", arr[i]);
		}*/

		//int arr[] = {1,2};//
	/*float arr_f[5] = {1.0f, 2.0f, 3.0f};
	for (int i = 0; i < 10; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/
	/*char c = 'A';
	printf("%c\n", c);*/

	//char str[6] = "coding";//[c][o][d][i][n][g]
	//char str[7] = "coding";//자동으로 \0이 들어간다.
	//rintf("%s\n", str);
	
	//char str[] = "coding";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));
	//for (int i = 0; i < sizeof(str); i++)
	//{
		//printf("%c\n", str[i]);
	//}
	/*char kor[] = "나도 코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));*/

	/*char c_array[7] = {'c','o','d','i','n','g','\0'};
	printf("%s\n", c_array); */

	/*char c_array[10] = {'c','o','d','i','n','g'};
	//printf("%s\n", c_array);
	/*for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]);
	}*/
	/*for (int i = 0; i < sizeof(c_array); i++)
		
	{
		printf("%d\n", c_array[i]);// 아스키코드값 출력 null문자를 0으로 입력되는 것을 말한다. 


	}*/

	//문자열 입력 받기: 경찰서 조서 쓰기 예제
	/*char name[256];
	printf("이름을 입력하세요:");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name); */

	//참고: 아스키코드 미국표준협회에서 제시한 표준 코드 체계
	//7bit 총 128개 코드(0-127개)
	//a : 97 (문자 a의 아스키코드 정수값)
	//A : 65
	//0 : 48 

	/*printf("%c\n", 'a');
	printf("%d\n", 'a');

	printf("%c\n", 'b');
	printf("%d\n", 'b');

	printf("%c\n,", "A");
	printf("%c\n",  "A");*/

	//참고 2 0~127 사이의 아스키코드 정수값에 해당하는 값을 아스키코드 정수값에 해당하는 문자 확인한다.

	/*for (int i = 0; i < 128; i++)
	{
	printf("아스키코드 정수 %d : %c\n", i, i);
	}*/
/*#include <stdio.h>

#include <time.h>

int main(void)

{

	srand(time(NULL));

	printf("\n\n === 아빠는 대머리 게임 === \n\n");

	int answer; // 사용자 입력값

	int treatment = rand() % 4; // 발모제 선택 (0-3)

	int cntShowBottle = 0; // 이번 게임에 보여줄 병 갯수

	int prevCntshowBottle = 0; //앞 게임에 보여준 병 갯수

	// 서로 보여주는 병 갯수를 다르게 하여 정답률 향상 (처음에 2개 -> 다음엔 3개 ...)

	// 3번의 기회 (3번의 발모제 투여 시도)

	for (int i = 1; i <= 3; i++)

	{

		int bottle[4] = { 0, 0, 0, 0 }; //4개의 병

		do {

			cntShowBottle = rand() % 2 + 2; //보여줄 병 갯수 (0~1, +2 -> 2,3)

		} while (cntShowBottle = prevCntshowBottle);

		int islncluded = 0; //보여줄 병 중에 발모제가 포함되었는 여부 (1 : 포함)

		printf(" > %d 번째 시도 : ", i);

		//보여줄 병 종류 선택

		for (int j = 0; j < cntShowBottle; j++)

		{

			int randBottle = rand() % 4; //0-3

			//아직 선택되지 않은 병이면, 선택처리

			if (bottle[randBottle] == 0)

			{

				bottle[randBottle] = 1;

				if (randBottle == treatment)

				{

					islncluded = 1;

				}

			}

			// 이미 선택된 병이면, 중복이므로 다시 선택

			else

			{

				j--;

			}

		}

		//사용자에게 문제 표시

		for (int k = 0; k < 4; k++)

		{

			if (bottle[k] == 1)

				printf("%d", k + 1);

		}

		printf(" 물약을 머리에 바릅니다\n\n");

		if (islncluded == 1)

		{

			printf("   >> 성공 ! 머리가 났어요 !!\n");

		}

		else

		{

			printf("   >> 실패 ! 머리가 나지 않앗어요... ㅠㅠ\n");

		}

		printf("\n ... 계속 하려면 아무키나 누르세요 ...");

		getchar();

	}

	printf("\n\n발모제는 몇 번일까요? ");

	scanf_s("%d", &answer);

	if (answer == treatment + 1)

	{

		printf("\n >> 정답입니다!\n");

	}

	else

	{

		printf("\n >> 땡! 틀렸어요, 정답은  %d 입니다\n", treatment + 1);

	}

	return 0;

}*/

	//문자 vs 문자열


	//char str[6] = "coding";//[c][o][d][i][n][g]
	//char str[7] = "coding";
	//printf("%s\n", str);//문자열 끝에는 끝을 의미하는 null문자 '\0'이 포함되어야 한다.
	
	/*char str[]= "coding";
	/*printf("%s\n", str);
	//printf("%d\n", sizeof(str));*/

	/*for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]); */

	/*char kor[] = "나도 코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor)); //영어는 한글자 1byte  한글은 한글자 2byte 한글 En gl ish*/

	/*char c_array[7] = {'c','o','d','i','n','g','\0'}; 
	printf("%s\n", c_array);*/

