#include <stdio.h>
void f(int *a,int *b,int *c)
{
	*a=*a*5;
	*b=*b*5;
	*c=*c*5;
	
}
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	f(&a,&b,&c);
	printf("a=%d b=%d c=%d",a,b,c);
	return 0;
}
