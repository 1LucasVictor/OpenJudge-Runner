#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,num[3];
  for(i=0; i<3; i++)
  {
   scanf("%d", &num[i]); 
  }
  if (num[0] == 7)
  {
    if(num[1] == 5 && num[2] == 5)
    {
      printf("YES");
    }
    else
    {
     printf("NO"); 
    }
  }
  else if(num[1] == 7)
  {
    if(num[0] == 5 && num[2] == 5)
    {
      printf("YES");
    }
    else
    {
     printf("NO"); 
    }
  }
  else if(num[2] == 7)
  {
    if(num[0] == 5 && num[1] == 5)
    {
      printf("YES");
    }
    else
    {
     printf("NO"); 
    }
  }
   return 0;
}
