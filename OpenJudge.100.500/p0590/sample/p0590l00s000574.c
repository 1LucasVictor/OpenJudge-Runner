#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>

int main()
{
  int array[6];
  int count = 0;
  for (int i =0;i<5;i++)
  {
    scanf("%d\n",&array[i]);
  }
  scanf("%d",&array[5]);

 for (int j=0;j<5;j++)
{
  for (int i=j+1;i<5;i++)
   {
     if (abs(array[j]-array[i])<=array[5])
        count++;

   }
}
  if (count==10)printf("Yay!");
  else printf(":(");




}

