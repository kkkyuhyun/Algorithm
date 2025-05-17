/*#include <stdio.h>
int main()
{
	int n,k,npk,i;
	
	printf("n 값을 입력하시오 (n>k):");
	scanf("%d",&n);
	
	printf("k 값을 입력하시오:");
	scanf("%d",&k);
	
	npk =1;
	for(i=n; i>=n-k+1;i--)
	{
		npk =npk*i;
		
	} 
	 printf("순열의 값은 %d입니다.\n", npk);
	 
	 return 0; 
}*/
/*
#include <stdio.h>
int main()
 {
    int n, k;

    printf("안내 : n > k이다.\n");
	printf("정수 n을 입력하시오 : ");
    scanf("%d", &n);
	printf("정수 k를 입력하시오 : ");
    scanf("%d", &k);

    int result = 1;

    for (int i = n; i >= n - k+1; i--) 
		{
		
            result *= i;
        }
     printf("순열 %dP%d는 %d입니다.\n", n, k, result);
	return 0;
}
