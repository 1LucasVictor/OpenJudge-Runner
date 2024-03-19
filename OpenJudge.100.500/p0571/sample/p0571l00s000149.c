#include <stdio.h>

int main(){
   int b,a,n,sum;
  
  scanf("%d\n",&n);
  scanf("%d\n",&a);
  scanf("%d\n",&b);


  sum=n*a;

  if(sum<b){
    printf("%d",sum);
  }else{
    printf("%d",b);
  }
}
