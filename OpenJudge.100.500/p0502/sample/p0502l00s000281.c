#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[1000];
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   int x;
  for(int i=0;i<n;i++){
     if(a[i]%2==0){
        if(a[i]%3==0 ||a[i]%5==0){
         
           x=1;
        }else{
           x=0;
        }
     }
  }

  if(x=1){
  printf("APPROVED");
  }else{
 printf("DENIED");
  }
  return 0;
}
