 #include <stdio.h>
#include<time.h>
/* swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int* ptr);*/
int main(void)
{
	//철수 101호 ->메모리 공간의 주소
	//영희 201호
	//민수 301호
	//문 아에 암호가 걸려 있다
	/*int 철수 = 1;
	int 영희 = 2;
	int 민수 = 3;

	printf("철수네 주소:%d.암호;%d\n", &철수, 철수);
	printf("영희네 주소:%d.암호;%d\n", &영희, 영희);
	printf("민수네 주소:%d.암호;%d\n", &민수, 민수);

	//미션맨의 등장

	//첫번째 미션맨: 아파트의 각 집에 방문하여 문에 적힌 암호를 확인한다
	int* 미션맨; // 포인터 변수
	미션맨 = &철수;
	printf("미션맨이 방문하는 곳 주소:%d,암호;%d\n", 미션맨, *미션맨);

	미션맨 = &영희;
	printf("미션맨이 방문하는 곳 주소:%d,암호;%d\n", 미션맨, *미션맨);

	미션맨 = &민수;
	printf("미션맨이 방문하는 곳 주소:%d,암호;%d\n", 미션맨, *미션맨);

	//두번째 미션: 각 암호에 3을 곱해라
	미션맨 = &철수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호; %d\n", 미션맨, *미션맨);

	미션맨 = &영희;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호; %d\n", 미션맨, *미션맨);

	미션맨 = &민수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호; %d\n", 미션맨, *미션맨);

	//스파이
	//미션맨이 바꾼 암호에서 2를 빼라

	/*int* 스파이 = 미션맨;
	printf("\n...스파이가 미션을 수행하는 중..\n");
	스파이 = &철수;
	*스파이 = *스파이 - 2;//
	printf("스파이가 방문하는 곳 주소;%d,암호;%d\n", 스파이, *스파이);
	스파이 = &영희;
	*스파이 = *스파이 - 2;//
	printf("스파이가 방문하는 곳 주소;%d,암호;%d\n", 스파이, *스파이);
	스파이 = &민수;
	*스파이 = *스파이 - 2;//
	printf("스파이가 방문하는 곳 주소;%d,암호;%d\n", 스파이, *스파이);


	//참고로 미션맨이 사는 곳의 주소는 &미션맨으로 확인

	printf("미션맨의 주소;%d\n", &미션맨);
	printf("스파이의 주소;%d\n", &스파이);*/

	//배열? 
	/*int arr[3] = {5,10,15};
	int* ptr = arr; //ptr 크기만큼의 arr 배열
	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
	}
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	for (int i = 0; i < 3; i++)
	{
		//printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
		printf("배열 arr[%d]의 값 : %d\n", i, *(arr+i));
	}
	for (int i = 0; i < 3; i++)
	{
		//printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
		printf("포인터 ptr[%d]의 값 : %d\n", i,* (ptr+i));
	}
	//*(arr+i) == arr[i] 똑같은 표현
	//arr==arr배열의 첫번째 값의 주소와 동일 == & arr[0]
	printf("arr 자체의 값: %d\n", arr);
	printf("arr[0]의 주소:%d\n", &arr[0]);

	printf("arr자체의 값이 가지는 주소의 실제 값 : %d\n", *arr);//*(arr+0)
	printf("arr[0]의 실제 값: %d\n",&arr[0]);

	//*&는 아무것도 없는 것과 같다 &는 주소이며 *는 그 주소의 값이기 때문에
	//*&는 서로 상쇄 된다.
	printf("arr[0]의 실제 값 : %d\n", *&*&*&*&arr[0]);*/

	//SWAP
	//int a = 10;
	//int b = 20;
	//printf("a의 주소 : %d\n", &a);
	//printf("b의 주소 : %d\n", &b);
	//a와 b의 값을 바꾼다
	//printf("(주소값 전달)Swap 함수 전 => a : %d, b : %d\n", a,b);
	//swap_addr(a, b);
	//printf("(주소값 전달)Swap 함수 후 => a : %d, b : %d\n", a, b);
	//값에 의한 복사(Call by Value) ->값만 복사한다는 의미

	//주소값을 넘기면? 메모리 공간에 있는 주소값 자체를 넘기면... 철수네처럼

	//배열일 때에는 arr2 -> 주소
	//int arr2[3] = { 10,20,30 };
	//changeArray(arr2);
	//changeArray(&arr2[0]);
	//for (int i = 0; i < 3; i++)
	//{
		//printf("%d\n", arr2[i]);
	//}

	//scanf에서 &num과 같이 &를 사용하는 이유는 무엇인가요? 

//물고기가 6마리가 있다
//이들은 어항에 살고 있느데 사막
//사막이 너무 더워서 너무 건조해서 물이 아주 빨리 증발을 해요
//물이 다 증발하기전에 어항에 물을 줘서 물고기를 살려주세요
//물고기는 시간이 지날수록 점점 커져서 나중네 냠냠 맛있게 먹기

	int level;
	int arrayFish[6];
	int* cursor;

	void initData();
	void printfFishes();

	int main(void);
	{
		long startTime = 0;//게임시작시간
		long totalElapsedTime = 0;//총 경과시간
		long prevElapsed = 0;//직전 경과시간

		int num;// 몇 번 어항에 물을 줄 것인지 사용자 입력
		initData();

		cursor = arrayFish;//cursor[0]

		startTime = clock();//현재시간을 천분의 1초
		while (1)
		{
			printfFishes();
			getchar();// 임시로 사용자 입력 대기
		}

		return 0;
	}
}

void initData()
{
	level = 1;
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; //어항의 물 높이 (0~100)
	}
}

void printfFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %3d ", arrayFish[i]);
	}
	printf("\n\n");
}

/*void swap_addr(int* a, int* b)
{
	printf("(Swap 함수 내) a의 주소 : %d\n", &a);
	printf("(Swap 함수 내) b의 주소 : % d\n",&b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달)Swap 함수 내 => a : %d, b : %d\n", *a, *b);
}
void changeArray(int* ptr)
{
	ptr[2] = 50;*/