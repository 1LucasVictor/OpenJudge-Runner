#include<stdio.h>
int main(){
  int a;
  int n=0;
  int t=0;
  int b;
  scanf("%d",&a);
  while(a!=n){
    scanf("%d",&b);
     if(b%2==0){
      if(b%3!=0){ 
        if(b%5!=0){
        t=1;
      }
    }
     }
    n=n+1;
  }
  if(t==1){
    printf("DENIED");
  }else{
    printf("APPROVED");
  }
  return 0;
}