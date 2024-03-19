#include<stdio.h>
int main(){
   int x,y,judg=0;
   int i,j;
   scanf("%d%d",&x,&y);
   for(i=0;i<=x;i++){
      for(j=0;j<=x-i;j++){
         if(i+j==x&&4*i+2*j==y){
            judg++;
            break;
         }
      }
      if(i==0&&j==0){
         judg=0;
      }
   }
   if(judg==0){
      printf("No\n");
   }else{
      printf("Yes\n");
   }
   return 0;
}
