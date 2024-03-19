#include<stdio.h>

int main(void){
  int i,count=0,a,b,c;

  scanf("%d %d %d",&a,&b,&c);


  for(;a<=c/2 && a<=b;a++){
    if(c%a==0){
      count++;
    }
  }

  printf("%d\n",count);
}
    

