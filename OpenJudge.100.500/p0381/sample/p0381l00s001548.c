#include <stdio.h>

int main (void) 
{

int n,s=0,x;
int i,j,k;

while(1){

   scanf("%d",&n); scanf("%d",&x);

   if(n==0 && x==0){
      break;
   }

   for(i = 1;i < n-1;i++){
      for(j = i + 1 ;j < n;j++)
         for(k = j + 1;k <= n;k++)
            if(i + j + k == x){
               s = s + 1;
            }
   }
   printf("%d\n",s);
}

return 0;
}