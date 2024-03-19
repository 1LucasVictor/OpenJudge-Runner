#include<stdio.h>

int main(void){
  int a; int b;
  int ab;
  int i;
  while((scanf("%d %d",&a,&b))!=EOF){
    ab=a+b;

    for(i=1;;i++){
      ab/=10;
      if(ab==0) break;
    }
    printf("%d\n",i);
  }
  return 0;
}

