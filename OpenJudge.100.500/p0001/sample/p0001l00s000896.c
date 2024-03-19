#include<stdio.h>

int main(void){
  int a,b,c,count;
  for(;;){
    if(scanf("%d %d",&a,&b)==EOF) break;
    count=0;
    c=a+b;
    for(;;){
      c=c/10;
      count++;
      if(c==0) break;
    }
    printf("%d\n",count);
  }
  return 0;
}
