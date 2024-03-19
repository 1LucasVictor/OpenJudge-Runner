#include<stdio.h>
void main(){
   int n;
   scanf("%d",&n);
   int a[n],i,judg;
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   judg=0;
   for(i=0;i<n;i++){
     if(a[i]%2==0){
        if(a[i]%3==0||a[i]%5==0){
        }else{
           judg++;
        }
     }
   }
   if(judg==0){
      printf("APPROVED");
   }else{
      printf("DENIED");
   }
}

