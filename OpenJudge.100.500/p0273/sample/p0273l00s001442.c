#include<stdio.h>
#define MAX 45

int main(void){
  int n,i,a[MAX];

  scanf("%d",&n);

  for(i=0; i<=n; i++){
    a[i]=1;
    if(i<2) continue;
    a[i]=a[i-1]+a[i-2];
  }
  printf("%d\n",a[n]);
  return 0;
}