#include<stdio.h>
#define max 100
int main(void){
  int i,n,j;
  int a[max];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(j=n-1;j>0;j--){
    printf("%d ",a[j]);
  }
  printf("%d\n",a[0]);

  return 0;
}

