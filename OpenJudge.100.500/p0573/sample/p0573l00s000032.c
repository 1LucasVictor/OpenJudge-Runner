#include<stdio.h>

unsigned length(char text[])
{
  unsigned len = 0;

  while(text[len])
    len++;
  return(len);
}

void count(char str[])
{
  int cnt[26] = {0};
  int i = 0;
  int j = 0;
  int num = 0;  //2回出現した文字数


  while(i<=26){
    if(str[i]>='A' && str[i]<='Z' && ++cnt[str[i]-'A'] == 2){
        j++;
    }
    i++;
  }

  if(j==2)
    puts("Yes");
  else
    puts("No");
}

int main(void)
{

  char text1[4];
  char text2;
  int flag1=0;
  int flag2=0;

  while(1)
  {
    scanf("%s",text1);
    if(length(text1) != 4)
    {
      puts("4 letters");
    }
    else
      break;
  }

  count(text1);

  return(0);
}
