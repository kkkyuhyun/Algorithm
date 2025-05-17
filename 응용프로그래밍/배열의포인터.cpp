#include <stdio.h>
int main()
{
	int test[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		printf("test[%d]의 주소=%d, 값=%d\n",i,&test[i],test[i]);
	}
	//printf("%d\n",test);
	for(int i=0;i<5;i++)
	{
		printf("%d\n",*(test+i));
	}
	
	return 0;
}





