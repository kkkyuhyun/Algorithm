#include <stdio.h>
int main() 
{
	int n1, n2;
	int i=1;
	int sum1=0;
	int sum2=0;
	
	printf("정수를 입력하시오:");
	scanf("%d",&n1);
	printf("정수를 입력하시오:");
	scanf("%d",&n2);
	
	while(i<=n1)
	{
		sum1+=i;
		i++;
	}
	i=2;
	while(i<=n2)
	{
		sum2+=i;
		i=i+2;
	}
	
	printf("1부터 %d까지 합이 %d입니다.\n",n1,sum1);
	printf("1부터 %d까지 짝수 합이 %d입니다.\n",n2,sum2);
	
	return 0;
}
