#include<stdio.h>
void func(char *d, char *s){ 
  while (*s!=NULL){
    *d=*s;
    d++;
    s++;
  }
  *d='\0';
}

int main(){
    char *str1="first";
    char str2[50]="teststring";
    int result=0;
    func(str2, str1);
    for(int i=0;str2[i]!='\0';i++){
      result+=i;
    }
    printf("%d", result);
}

//str1 [0](10번지)f [1](11번지)i [2](12번지)r [3](13번지)s [4](14번지)t [5](15번지)\0
//str2 [0](20번지)t [1](21번지)e [2](22번지)s [3](23번지)t [4](24번지)s [5](25번지)t [6](26번지)r [7](27번지)i [8](28번지)n [9](29번지)g [10](30번지)\0
//d 20번지  s 10번지    *d  *s
//result= result+i 0+1+2+3+4 = 10 
