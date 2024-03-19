#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[21];
  int i, tmp, num;

  scanf("%s", str);

  i = 0;
  num = strlen(str) -1;
  
  while(i < num){
    tmp = str[i];
    str[i] = str[num];
    str[num] = tmp;
    i++;
    num--;
  }

  printf("%s\n", str);

  return 0;
}