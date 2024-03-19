#include <stdio.h>

int main()
{
  int a[5],k,i,min = 200,max = 0;
  for(i=0;i<5;i++)
    scanf("%d",&a[i]);
  scanf("%d",&k);
  for(i=0;i<5;i++){
    if(max < a[i])
      max = a[i];
    if(min > a[i])
      min = a[i];
  }
  if(max - min <= k)
    printf("Yay!\n");
  else
    printf(":(\n");
}