#include <stdio.h>
int count_5=0,count_7=0;
void check(int word);
int main(void)
{
  int word[4],i;
  char str[16];
  fgets(str,sizeof(str),stdin);
  sscanf(str,"%d%d%d",&word[0],&word[1],&word[2]);
  for (i=0;i<3;i++)
  {
    check(word[i]);
  }
  if((count_5 == 2)&&(count_7 == 1))
  {
    puts("YES");
  }
  else
  {
    puts("NO");
  }
  return 0;
}

void check(int word)
{
  switch (word)
  {
    case 5:
      count_5++;
      break;
    case 7:
      count_7++;
      break;
    default:
      break;
  }
}