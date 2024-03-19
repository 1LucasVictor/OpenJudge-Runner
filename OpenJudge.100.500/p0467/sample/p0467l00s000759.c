#include<stdio.h>

int main(){
  int a,b,c,k,i;
  int sum=0;
  scanf("%d %d %d %d\n",&a,&b,&c,&k);
  if(a>=k){
    sum=k;
  }else if(a+b>=k){
    sum=a;
  }else{
    sum=a-(k-(a+b));
  }
  
  printf("%d",sum);
  return 0;
}
