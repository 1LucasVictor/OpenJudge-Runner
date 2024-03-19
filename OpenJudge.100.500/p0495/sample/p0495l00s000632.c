#include<stdio.h>
int main()
{
  char str[3];
  int i;
  for(i=0;i<3;i++)
    scanf("%s",&str[i]);
  
  if(str[0]==str[1]&&str[1]==str[2])
    printf("No");
  else
    printf("Yes");
  
  return 0;
}