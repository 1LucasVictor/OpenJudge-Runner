#include<stdio.h>
int main()
{
  int N,i,count=0;
  scanf("%d",&N);
  int arr[N];
  char a[10]="APPROVED";
  char b[10]="DENIED";
   for(i=0;i<N;i++)
   {
     scanf("%d",&arr[i]);
   }
  for(i=0;i<N;i++)
  {
    if(arr[i]%2==0&&(arr[i]%3==0||arr[i]%5==0))
    {
      
      
        count++;
      
    }
  }
  if(count>0)
  {
    printf("%s",a);
  }
  else
  {
    printf("%s",b);
  }
  return 0;
}
