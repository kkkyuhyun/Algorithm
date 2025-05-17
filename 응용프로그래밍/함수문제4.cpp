#include <stdio.h>
void f(int x)
{
	if(x<2 || x>9)
		printf("구구단이 아님");
	else
	{
		for(int i=1;i<=9;i++)
			printf("%d X %d = %d\n",x,i,x*i);
		
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	f(a);
	return 0;
}
