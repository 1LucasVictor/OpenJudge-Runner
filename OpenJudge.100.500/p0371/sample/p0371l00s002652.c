#include<stdio.h>
int main(){
  int a[10000];
  int n,i,max,min;
  long long int sum;

  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  max = min = sum = a[0];
  
  for(i=1;i<n;i++){
    if(max < a[i]) max = a[i];
    if(min > a[i]) min = a[i];
    sum += a[i];
  }

  printf("%d %d %lld\n",min,max,sum);
  
  return 0;
}