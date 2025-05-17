#include <stdio.h>
void input(int (*pa)[4])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
			scanf("%d",&pa[i][j]);	
	}	
}
void output(int (*pa)[4])
{
	printf("출력결과\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
			printf("%d ",pa[i][j]);
		printf("\n");	
	}
}
int main()
{
	int a[3][4]={0};
	
	input(a);
	output(a);
}
