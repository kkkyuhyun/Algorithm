#include <stdio.h>
void f(int a)
{
	printf("%d\n",&a);
	if(a%2==0)
		printf("Â¦¼ö");
	else
		printf("È¦¼ö");
	
	a=10;
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",&a); 
	f(a);
	printf("È£ÃâÈÄ a = %d\n",a); 
	return 0;
}
