#include <stdio.h>
void f(int a, int b)   //값에 의한 전달, call by value  
{
	int temp=a;
	a=b;
	b=temp;
	printf("서브의 a주소 = %d, 서브의 b주소 = %d\n",&a,&b);
	printf("서브함수 a=%d, b=%d\n",a,b);   //20,10
	
}
int main()
{
	int a=10,b=20;
	printf("메인의 a주소 = %d, 메인의 b주소 = %d\n",&a,&b); 
	printf("함수 호출전 a=%d, b=%d\n",a,b); //10,20
	f(a,b);
	printf("함수 호출후 a=%d, b=%d\n",a,b);  //10,20
	
	
	return 0;
}
