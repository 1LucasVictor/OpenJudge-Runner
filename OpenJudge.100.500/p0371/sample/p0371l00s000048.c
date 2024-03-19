#include<stdio.h>
int main(){
  int n,max,min,i,a;
  long long sum;
  sum=0;
  max=-1000000;
  min=1000000;
  scanf("%d", &n);
  for(i=0;i < n;i++){
    scanf("%d", &a);
    if(a > max){
      max=a;
    }
    if(a < min){
      min=a;
    }
    sum=sum+a;
  }
  printf("%d %d %lld\n", min, max, sum);
  return 0;
}

