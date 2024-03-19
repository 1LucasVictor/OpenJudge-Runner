#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
  int a,b,c;
  int w;

  scanf("%d%d%d\n",&a,&b,&c);

  w=a-b;

  if(w<c){
    printf("%d",c-w);
  }else{
    printf("0");
  }
}
