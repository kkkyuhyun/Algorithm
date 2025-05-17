#include<stdio.h>
struct node{
  int n1;
  node *n2;
};

int main(){
  struct node *head =NULL;
  struct node a ={10,0};
  struct node b ={20,0};
  struct node c ={30,0};
  head =&a;
  a.n2=&b;
  b.n2=&c;
  printf("%d", head->n2->n1);
}

//head      구조체 a(100번지)     구조체 b(200번지)    구조체 c(300번지)
//          n1:10                 n1:20               n1:30
//100번지    n2:0                 n2: 0                n2: 0
