#include <stdio.h>
/*float f(int *score)    //float f(int score[])
{
	int tot=0;
	for(int i=0;i<6;i++)
	{
		tot=tot+*(score+i);
	}
	return tot/6.0;
}*/
float f(int score[])
{
	int tot=0;
	for(int i=0;i<6;i++)
	{
		tot=tot+score[i];
	}
	return tot/6.0;
}

int main()
{
	int score[6]={90,80,95,40,20,10};
	printf("%.2f",f(score));
	return 0;
}
