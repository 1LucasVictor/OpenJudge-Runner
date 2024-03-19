#include<stdio.h>

int main(void){
  int a,b,all= 0,i;
  scanf("%d %d",&a,&b);
  for(i = 1;;i++){
      all += a;
      if(all >= b)break;
      else all--;
  }
  printf("%d\n",i);
}
    
  