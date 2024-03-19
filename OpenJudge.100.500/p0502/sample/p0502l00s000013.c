#include<stdio.h>
int main(){
   int i,n,w,k;
   int array[1000];
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",&array[i]);
   }
   w=0; k=0;
   for(i=0;i<n;i++){
      if(array[i]%2==0){
         k++;
      }
      if((array[i]%2==0&&array[i]%3==0)||(array[i]%2==0&&array[i]%5==0)){
         w++;
      }
   }
   if(k==w){
      printf("APPROVED\n");
   } else {
      printf("DENIED\n");
   }
   return 0;
}
