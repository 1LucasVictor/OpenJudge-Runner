#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
int H;
int W;
int a;
int i;
int c;

scanf("%d %d",&H,&W);

for(a=1;a>0;a++){
  for(i=1;i<=H;i++){
    for(c=1;c<=W;c++){
      if(i==1){
      printf("#");}
      else{
        if(i==H){
        printf("#");}
        else{
          if(c==1){
          printf("#");}
            else{
            if(c==W){
            printf("#");}
              else{
              printf(".");}}}}}
    printf("\n");}
  scanf("%d %d",&H,&W);
  printf("\n");
  if(H==0 && W==0){
  break;}
}
return 0;
}
