#include<stdio.h>

int main(){
  int a,b,k;
  scanf("%d %d",&a,&b);

  if(a%2==b%2){
    k=(a+b)/2;
    printf("%d\n",k);
  }else{
    printf("IMPOSSIBLE\n");
  }


  return 0;
}