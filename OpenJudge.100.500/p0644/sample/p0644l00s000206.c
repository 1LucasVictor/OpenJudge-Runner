#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
  char s[] = "";
  int i, answer;
  answer = 0;
  scanf("%s",s);
  for(i=0; i<=2; i++)
  {
    if ((s[i]) == '1')
    {
      answer += 1;
    }
    
  }
  printf("%d",answer);

  return 0;
}
