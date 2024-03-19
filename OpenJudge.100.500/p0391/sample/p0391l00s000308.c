#include <stdio.h>
#include <string.h>
   
int main()
{
  char temp, str[1001], re[1001], p[101];
  int i, j, a, b, q;
   
  scanf("%s", str);
  scanf("%d", &q);
 
  for(i = 0; i < q; i++)
  {
    scanf(" %s%d%d", p, &a, &b);
 
    if(strcmp(p, "print") == 0)
    {
      for(j = a; j <= b; j++)
      {
          printf("%c", str[j]);
      }
 
      printf("\n");
    }
 
    else if(strcmp(p, "reverse") == 0)
    {
      for(j = 0; a+j < b-j; j++)
      {
         temp = str[a+j];
         str[a+j] = str[b-j];
         str[b-j] = temp;
      }
    }
 
    else if(strcmp(p, "replace") == 0)
    {
      scanf(" %s", re);
      for(j = 0; a+j <= b; j++)
      {
          str[a+j] = re[j];
      }
    }
  }
  return 0;
}
