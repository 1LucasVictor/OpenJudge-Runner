#include<stdio.h>
#include<string.h>

int main(void)
{
  char temp[20];
  char cpy[20];
  int i;
  int length;

  scanf("%s", cpy);

  length = strlen(cpy);
 
  for(i=0; i<length; i++){
    temp[length-i-1] = cpy[i];
  }

  for(i=0; i<length; i++){
    putchar(temp[i]);
  }
  putchar('\n');

  return 0;
}