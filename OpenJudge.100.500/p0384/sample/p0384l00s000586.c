#include<stdio.h>
#define MOJI 1200

int main()
{
  char str[MOJI];
  int i, count=0;

  while(1){
    scanf("%c", &str[count]);

    if('A' <= str[count] && str[count] <= 'Z'){
      str[count] += 'a' - 'A';
    }
    else if('a' <= str[count] && str[count] <= 'z'){
      str[count] -= 'a' - 'A';
    }

    if(str[count] == '\n')break;
    count++;
  }

  for(i=0; i < count ;i++)
    printf("%c",str[i]);
  printf("\n");
  return 0;
}