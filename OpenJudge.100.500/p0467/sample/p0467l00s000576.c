#include<stdio.h>
int main(){
  long int a, b, c, k;
  scanf("%ld%ld%ld%ld", &a,&b,&c,&k);
  if(k-a<0){
    printf("%ld",k);
    return 0;
  }
  if(k-a-b<0){
    printf("%ld",a);
    return 0;
  }else{
    printf("%ld",a-(k-a-b));
    return 0;
  }
  return 0;
}