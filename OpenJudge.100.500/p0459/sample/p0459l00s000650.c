#include <stdio.h>

int main(void){
   int x,y,i,j;
   scanf("%d %d",&x,&y);
   for(i=0;i<1000;i++){
      for(j=0;j<1000;j++){
         if(i+j==x&&4*j+i*2==y){
            printf("Yes");
            return 0;
         }
      }
   }
   printf("No");
}

