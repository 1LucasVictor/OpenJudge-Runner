#include<stdio.h>
#define NUM 100

int main(void) {
  int i,n;
  int a[NUM];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[n-i]);
  for(i=1;i<=n;i++){
    printf("%d",a[i]);
    if(i<n)
      printf(" ");
    else break;
  } 
  printf("\n");
  return(0);
}