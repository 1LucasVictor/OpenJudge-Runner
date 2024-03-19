#include <stdio.h>
int main(void){
int a,b,c,d,e,k;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&e);
  scanf("%d",&k);
  if(b-a>k){printf(":(");return 0;}
  if(c-a>k){printf(":(");return 0;}
  if(d-a>k){printf(":(");return 0;}
  if(e-a>k){printf(":(");return 0;}
  if(c-b>k){printf(":(");return 0;}
  if(d-b>k){printf(":(");return 0;}
  if(e-b>k){printf(":(");return 0;}
  if(d-c>k){printf(":(");return 0;}
  if(e-c>k){printf(":(");return 0;}
  if(e-d>k){printf(":(");return 0;}
printf("Yay!");
return 0;
}