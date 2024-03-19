#include<stdio.h>
int main(void){
  int X,Happy,i;
  scanf("%d",&X);
  for(Happy=0;X>=500;X=X-500)
    Happy=Happy+1000;
  for(i=0;X>=5;X=X-5)
    Happy=Happy+5;
  printf("%d",Happy);
return 0;
}