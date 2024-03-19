#include<stdio.h>
int main(void){
  int i,n,a,b;
  scanf("%d",&n);
  for(i=2;i<10;i++){
    if(n%i==0){
        a=n/i;
        b=i;
    }
  }
   if((a>=1 && a<=9)&& (b>=1 && b<=9)&& (a*b==n)){
    printf("Yes\n");
   }
   else{
    printf("No\n");
   }
   return 0;
}
