#include<stdio.h>

int main(){

  int a,b,c,x;
  x=0;
  scanf("%d %d %d", &a,&b,&c);
  for(;a<=b;a++){
    if(c%a==0){
      x=x+1;
    } else{
    }
  }
 printf("%d\n",x);
 return 0;
}