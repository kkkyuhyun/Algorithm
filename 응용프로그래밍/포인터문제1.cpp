#include <stdio.h>
void f(int *a,int *b)
{
	*a=*a+3;
	*b=*b+3;
	
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	f(&a,&b);
	printf("a=%d b=%d",a,b);
	return 0;
}
