#include <stdio.h>
#include <stdlib.h>

int main(void){
 int a,b,c;
 scanf("%d %d %d", &a,&b,&c);
  if(a - b > 0 && c > 0){
    if(a - b >= c){
      c = 0;
    }else{
      c = c - (a-b);
    }
  }
  printf("%d\n",c);
}
