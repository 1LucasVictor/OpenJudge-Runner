#include <stdio.h>


 int main(){
 int H,W,i,j;
 while(1){
 scanf("%d %d",&H ,&W);
 if(H==0&&W==0){break;};
 for(i=1;i<=H;i++){
 for(j=1;j<=W;j++){
 	if(j==1||j==W||i==H||i==1){printf("#");}
 	else{printf(".");}
 	
 };
 printf("\n");};
  printf("\n");
 }
 return 0;}

