#include<stdio.h>
int main (void){
  int n;
  int k,l;
  while(1){
    scanf("%d",&n);
    if(n==0) break;
    int a[n];
    long sum[n][n]; //?????????[]???????????????????¬????[]??????????????????
    for(k=1;k<=n;k++){
      scanf("%d",&a[k-1]);
      sum[k-1][k-1] = a[k-1];
    }
    for(k=1;k<=n;k++){
      for(l=k;l<=n-1;l++){
        sum[k-1][l] = sum[k-1][l-1] + a[l];
      }
    }
    long max=0;
    for(k=1;k<=n;k++){
      for(l=k;l<=n;l++){
        if(max < sum[k-1][l-1]) max = sum[k-1][l-1];
      }
    }
    printf("%ld\n",max);
  }
  return 0;
}