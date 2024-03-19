#include<stdio.h>
int main(void){
  int x,y;
scanf("%d %d",&x,&y);
if(y%2==1){
  printf("No\n");}
else if(2*x-1<y&&y<4*x){
  printf("Yes\n");}
  else{
  printf("No\n");}
  return 0;
  
}

