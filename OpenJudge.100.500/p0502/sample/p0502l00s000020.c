#include <stdio.h>

int main(){
   int n;scanf("%d",&n);
   int a[100];for(int i = 0;i < n;i++)scanf("%d",&a[i]);
   int flag = 1;
   for(int i = 0;i < n;i++){
      if(a[i] % 2 == 0){
         if(!((a[i] % 3 == 0)||(a[i] % 5 == 0)))flag = 0;
      }
   }
   if(flag == 1)printf("APPROVED");
   else printf("DENIED");
}