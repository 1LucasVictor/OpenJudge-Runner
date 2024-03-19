#include<stdio.h>
int main(void){
  int N,M;
  scanf("%d",&N);
  M=N%10;
  if(M==7){
   printf("Yes");
   return 0;}
  M=N%100;
  M=M%10;
  if(M==7){
    printf("Yes");
    return 0;}
  M=N/100;
  if(M==7){
    printf("Yes");
    return 0;}
  printf("No");
  return 0;
}