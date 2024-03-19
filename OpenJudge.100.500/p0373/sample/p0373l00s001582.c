#include<stdio.h>
int main(void)
{
   int H[300],W[300],i,j,k,flag=1,cnt=0;
   do{
      scanf("%d %d",&H[cnt],&W[cnt]);
      if(H[cnt]==0&&W[cnt]==0){
         flag=0;
      }
      cnt++;
   }while(flag);
   for(i=0;i<cnt-1;i++){
      for(j=0;j<H[i];j++){
         for(k=0;k<W[i];k++){
            if(j==0||j==H[i]-1){
               printf("#");
            }
            else if(k==0||k==W[i]-1){
               printf("#");
            }
            else{
               printf(".");
            }
         }
         printf("\n");
      }
      printf("\n");
   }
   return 0;
}