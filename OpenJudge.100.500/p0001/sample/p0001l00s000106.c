#include <stdio.h>
#include <math.h>
 
int main(void){
  int a,b;
  int i,tmp;
   
  while(scanf("%d %d",&a,&b)!=EOF){
    printf("%d\n",(int)log10((float)a+b) + 1);
  }
   
  return 0;
}
 