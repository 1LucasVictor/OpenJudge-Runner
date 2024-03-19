#include<stdio.h>
#include <stdbool.h>
int main(){
   int n;
   bool judge = false;
   scanf("%d", &n);
   int a[1000];
   for(int i=0;i<n;i++){
      scanf("%d", &a[i]);
   }
   for(int i=0;i<n;i++){
      if(a[i]%2==0){
         if( a[i]%5!=0 && a[i]%3!=0 ){
            judge = true;
         }
      }
   }
   if(judge){
      printf("DENIED\n");
   }else{
      printf("APPROVED\n");
   }
   return 0;
}
