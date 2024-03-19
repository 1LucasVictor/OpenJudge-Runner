#include<stdio.h>

int main (void){
  int n;
  int i;
  int max,min,sum;

  scanf("%d",&n);
  int a[n];


  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  min = a[0];
  max = a[0];
  sum = a[0];

  for(i=1;i<n;i++){
    if(min > a[i])
      min = a[i];
    if(max < a[i])
      max = a[i];
    sum += a[i];
  }

  printf("%d %d %d\n",min,max,sum);

  return 0;
}