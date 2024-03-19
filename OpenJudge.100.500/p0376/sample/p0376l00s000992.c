#include<stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(j=n-1;j>0;j--){
    printf("%d ",a[j]);
  }
  printf("%d\n",a[0]);
  return 0;
}