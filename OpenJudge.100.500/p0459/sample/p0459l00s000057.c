#include<stdio.h>

int main(void)
{
   int x,y,i,j;
   
   scanf("%d%d",&x,&y);
  
   for(i=0;i<=100;i++){
     for(j=0;j<=100;j++){
       if(2*i+4*j == y && i+j==x){  
         printf("Yes");
         return 0;
       }
     }
   }
  
  if(i==101)
    printf("No");
  
   return 0;
  
}
