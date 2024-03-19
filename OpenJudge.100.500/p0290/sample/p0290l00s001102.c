#include<stdio.h>

int main()
{
  int n,i,a[10000],count=0,limit,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    limit=a[i]/2;
    for(j=limit;j>1;j--){
      if(a[i]%j == 0)break;
  }
    if(j==1)count++;
  }
  printf("%d\n",count);
  return 0;
}