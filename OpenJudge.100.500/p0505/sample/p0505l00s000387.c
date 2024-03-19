#include<stdio.h>

int main(){
   int a,n,x;
   int sum = 0;
   scanf("%d %d", &a,&n);
   for(int i = 0; i < n; i++){
      scanf("%d", &x);
      sum += x;
   }
   if(a <= sum){
      printf("Yes\n");
   }else{
      printf("No\n");
   }
   return 0;
}

