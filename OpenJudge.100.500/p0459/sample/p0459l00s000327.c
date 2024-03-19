#include<stdio.h>

int main(void){
 int x,y,a,b;
 scanf("%d %d",&x,&y);
 if(y%2!=0){
   printf("No");
 }else{
  a = (y-2*x)/2;
  b = (4*x-y)/2;
  if(a>=0 && b>=0){
    printf("Yes");
  }else{
    printf("No");
  } 
 }
 return 0; 
}