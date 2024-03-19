#include<stdio.h>
int main(){
  int n,a[100],i;
  scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&a[n-i-1]);
    }
    printf("%d",a[0]);
    for(i=1;i<n;i++){
      printf(" %d",a[i]);
    }
    printf("\n");
  return 0;
}