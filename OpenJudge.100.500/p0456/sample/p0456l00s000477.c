#include <stdio.h>
 
int main()
{
  
  char s[1000];
  char t[1000];
  
  int i;
  i = 0;
  
  int n;
  n = 0; 
  
  scanf("%s",t);
  scanf("%s",s);
 
  
  while(s[i] != '\0')
  {
    if (s[i] != t[i])
      n++;
    i++;
  }
    printf("%d", n);
    return 0;
}