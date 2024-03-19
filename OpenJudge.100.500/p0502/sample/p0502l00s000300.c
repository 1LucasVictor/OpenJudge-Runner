#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   int x=0;
  for(int i=0;i<n;i++){
     if(a[i]%2==0){
        if(a[i]%3==0 ||a[i]%5==0){
         
           x++;
        }else{
           x-=100;
        }
     }
  }

  if(x<0){
      printf("DENIED");

  }else{
  printf("APPROVED");
  }
  return 0;
}
