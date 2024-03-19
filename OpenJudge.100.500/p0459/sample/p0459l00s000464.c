#include <stdio.h>

int main()
{
 int x,y;
 scanf("%d%d",&x,&y);
 int ans=0;
 for(int i=0;i<=x;i++){
   if(i*2+(x-i)*4==y){
     ans=1;
   }
 }
   if(ans==1){
     printf("Yes");
   }
    else{
      printf("No");
    }
   }
 
  
  
    
    
    
  
  
  
