#include<stdio.h>

int main(void){
  int n;
  int a[200000];
  int sum[200000];

  scanf("%d", &n);
  for(int i=0;i<n-1;i++){
    scanf("%d", &a[i]);
    sum[a[i]-1]++;
  }
  for(int i=0;i<n;i++){
    printf("%d\n", sum[i]);
  }
  
  return 0;
}
