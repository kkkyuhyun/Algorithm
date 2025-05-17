//문자 단위 쓰기

#include <stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main() {
	FILE* fp; //1.파일 포인터 설정
	char c;
	fp = fopen("sample.txt", "w");//파일 열기(쓰기)

	if (fp == NULL) {
		printf("파일 열기 실패\n");//에러 메시지 출력
		exit(1);//프로그램 강제 종료

	}

	printf("문자를 입력하시오. 입력을 끝내려면 ctrl+z를 누르세요.");
	while ((c = getchar()) != EOF)//문자 출력의 끝을 판별
		putc(c, fp);//3. 파일 입출력 : 문자를 파일로 출력
	fclose(fp);//파일닫기 */
}