#include <stdio.h>

void Input(void);
int Operation(void);

int cnt[10];

int main(void)
{
  Input();
  printf("%s\n", Operation() ? "YES" : "NO");
  
  return 0;
}

void Input(void)
{
  int i, tmp;
  for(i = 1; i <= 3; i++)
  {
    scanf("%d", &tmp);
    cnt[tmp]++;
  }
 }

int Operation(void)
{
  if(cnt[5] == 2 && cnt[7] == 1) return 1;
  return 0;
}