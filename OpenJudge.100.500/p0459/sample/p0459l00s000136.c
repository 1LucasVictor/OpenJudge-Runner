#include<stdio.h>
int main(){
  int a,b,c,d,e;
  int x,y;
  scanf("%d %d",&x,&y);
  for(a=0;a<=x;a++){
   if(a*2+(x-a)*4==y){
    printf("Yes");
     return 0;
   }
    
    
  }
  
  
  printf("No");
  
 return 0; 
}