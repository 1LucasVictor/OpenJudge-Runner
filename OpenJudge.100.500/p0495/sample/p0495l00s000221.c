#include <stdio.h>

int main(int argc, char** argv)
{
  char s[4];
  int cnt[256] = {0};
  
  fgets(s, sizeof(s), stdin);
  cnt[s[0]]++;
  cnt[s[1]]++;
  cnt[s[2]]++;
  if(cnt['A']==3){
    printf("No\n");
  } else if(cnt['B']==3){
    printf("No\n");
  }else {
    printf("Yes\n");
  }
  return 0;
}

