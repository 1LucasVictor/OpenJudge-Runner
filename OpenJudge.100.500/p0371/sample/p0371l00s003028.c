#include<stdio.h>

int main(){
  int n,i,a,maxn = -1000000,minn = 1000000;
  long sum = 0;

  scanf("%d",&n);

  for(i=0;i<n;++i){
    scanf("%d",&a);

    if(a < minn) minn = a;
    if(a > maxn) maxn = a;

    sum += a;
  }

  printf("%d %d %ld\n", minn, maxn, sum);
  
  return 0;
}

