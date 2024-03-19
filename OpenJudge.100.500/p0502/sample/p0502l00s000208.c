#include <stdio.h>

int main(void){
   int n,i,result=0;
   scanf("%d",&n);
   int authNum[n];
   for (i=0;i<n;i++)
      scanf("%d",&authNum[n]);

   for (i=0;i<n;i++){
      if(authNum[i]%2==0){
        if((authNum[i]%3==0)||(authNum[i]%5==0)){} else { result=-1;}
      }
   }

   if (result!=-1) printf("APPROVED\n");
   else printf("DENIED\n");
   return 0;
}