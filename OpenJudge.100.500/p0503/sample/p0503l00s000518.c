#include<stdio.h>
#define SIZE 200000
int main()
 {
  int i,a[SIZE],j,n, flag = 0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0; i<n; i++)
   {
    for(j=i+1;j<n;j++)
    {
    if(a[i]==a[j])
    {
    flag = 1;
    }
   }
   }
   if(flag == 1)
   {
       printf("NO\n");
   }
   else{
    printf("YES\n");
   }
 }