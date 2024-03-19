#include<stdio.h>

int main(){
  int A,B,T;
  scanf("%d",&A);
  scanf("%d",&B);
  scanf("%d",&T);
  int n = 1;
  int ans = 0;
  while(n*A < (T+0.5)){
    ans += B;
    n += 1;
  }
  if(A>(T+0.5)){
    printf("0\n");
  }else{
  	printf("%d\n",ans);
  }
  return 0;
}