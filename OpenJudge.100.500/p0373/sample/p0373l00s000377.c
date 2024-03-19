#include<stdio.h>

int main(){
 int i,H,W,j;
 scanf("%d%d",&H,&W);
 while(H*H+W*W){
  for(j=0;j<H;j++){
   if(j*(H-1-j)){
    printf("#");
    for(i=2;i<W;i++){
     printf(".");}
    printf("#");}
   else{ 
    for(i=0;i<W;i++){
     printf("#");}}
   printf("\n");}
  printf("\n");
  scanf("%d%d",&H,&W);}
 return 0;}