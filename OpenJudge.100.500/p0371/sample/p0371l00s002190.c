#include<stdio.h>
int main(){
  int n, a[3000], i, min, max, sum;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  min = a[0];
  max = a[0];
  sum = a[0];
  for(i=1;i<n;i++){
    if(min>a[i]){
      min = a[i];
    }else if(max<a[i]){
      max = a[i];
    }
    sum += a[i];
  }
  printf("%d %d %d\n", min, max, sum);
  return 0;
}