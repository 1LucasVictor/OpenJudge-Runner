#include <stdio.h> 
#include <stdlib.h> 
int main(){
 int h; 
int w; 
scanf("%d %d", &h,&w); 
while (h!=0&&w!=0){
 for(int i=0;i<h;i++){
 for(int j=0;j<w;j++){
 if(!i||!j||i==h-1||j==w-1){
 printf("#"); 
 }else{ 
 printf(".");
 }
 }
 puts("");
 } puts("");
 scanf("%d %d", &h,&w);
 } return 0;
 } 
