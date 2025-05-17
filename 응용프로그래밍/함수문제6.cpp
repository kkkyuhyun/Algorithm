#include <stdio.h>
char f(int s)
{
	if(s>=90 && s<=100) return 'A';
	else if(s<90 && s>=80) return 'B';
	else if(s<80 && s>=70) return 'C';
	else if(s<70 && s>=60) return 'D';
	else return 'F';
	
}
int main()
{
	int score;
	scanf("%d",&score);
	printf("%c",f(score));
	return 0;
}
