#include <stdio.h>
#include <string.h>

int main()
{
  int a[5],k,i;

  for(i=0;i<5;i++)
    scanf("%d",&a[i]);
  scanf("%d",&k);

  int min =a[0],max = a[0];
  
  for(i=1;i<5;i++)
    {
      if(max < a[i])
	max = a[i];
      if(min > a[i])
	min = a[i];
    }
  
  if(k < max - min)
    printf(":(\n");
  else
    printf("Yay!\n");
  
  return 0;
  
}
