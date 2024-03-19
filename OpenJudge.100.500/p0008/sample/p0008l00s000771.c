#include <stdio.h>
int is_prime(int j){
  int x;
  for(x=2;x*x<=j;x++){
    if(j%x==0)return 0;
  }
  return 1;
}
int main(){
  int n;
  int i,j;
  int count;
  while(scanf("%d",&n)!=EOF){
    count=0;
    for(i=2;i<=n;i++){
      if(is_prime(i))count++;
      }
    printf("%d\n",count);
  }
  return 0;
}