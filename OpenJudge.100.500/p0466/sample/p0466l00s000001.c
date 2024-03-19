#include<stdio.h>
#include<string.h>

int main(void){
  char s[10], t[11];
  scanf("%s%s", s, t);
  int sn = strlen(s);
  int tn = strlen(t);
  // printf("s: %s, len(%d)\nt: %s, len(%d)\n", s, sn, t, tn);
  if(memcmp(s, t, sn)  == 0){
    if(tn == sn+1){
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
  return 0;
}
