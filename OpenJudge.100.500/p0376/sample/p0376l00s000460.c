#include<stdio.h>
int main()
{
  int i,j,n,m;
  scanf("%d",&n);
  int ara[n],arr[n];
  for(i=0;i<n;i++)
    scanf("%d",&ara[i]);
    for(j=n-1,i=0;j>=0,i<n;j--,i++){
      arr[j]=ara[i];}
   for(j=0;j<n-1;j++)
   { printf("%d ",arr[j]);}
   printf("%d\n",arr[n-1]);

    return 0;
}
