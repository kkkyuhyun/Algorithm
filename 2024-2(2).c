#include<stdio.h>
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
}
//C 언어의 Call by Value (값에 의한 호출) 방식 때문에 원래 변수의 값은 변경되지 않는다. 

int main(){
  int a=11;
  int b=19;
  swap(a,b);
  switch(a){
    case 1:
      b+=1;
    case 11:
      b+=2;
    default:
      b+=3;
      break;
    }
    printf("%d", a-b); 

//int t=a t=11, a=b a=19, b=t b=11인데 
//swap 함수 실행 시 지역변수가 소멸된다. 
//변수 t는 지역변수 소멸되어 매개변수 a와 b소멸되고 swap 함수 실행하였으면 다시 돌아가서 main 함수를 호출한다. 
//a=11, b=19여서 case 11: b+=2 이므로 21 default: b+=3: 21+3=24; 
//따라서 print문 출력결과 11-24 = -13
