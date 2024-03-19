#include<stdio.h>
int main(void)

{
int i;
  int str[10];

  for(i=0;i<=4;i++)
    scanf("%s",str);
  
  if(str[0]==str[1]||str[1]==str[2]||str[2]==str[3])
    printf("Bad");
  else 
    printf("Good");
  
  return 0;
}
