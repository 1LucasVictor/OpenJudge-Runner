#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int i,a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=n-1;i!=-1;i--){
    printf("%d",a[i]);
    if(i!=0) printf(" ");
  }
  printf("\n");
  return 0;
}