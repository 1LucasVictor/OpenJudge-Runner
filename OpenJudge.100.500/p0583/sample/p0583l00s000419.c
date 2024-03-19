#include <stdio.h>

int main(void){
  int n, a, b, c, d;
  scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);

  char s[n];
  scanf("%s", s);

  int cnt = 0;
  for (int i = a; i < c; i++) {
    if(s[i] == '#'){
      cnt++;
      if(cnt == 2){
        printf("No\n");
        return 0;
      }
    }else cnt = 0;
  }
  for (int i = b; i < d; i++) {
    if(s[i] == '#'){
      cnt++;
      if(cnt == 2){
        printf("No\n");
        return 0;
      }
    }else cnt = 0;
  }

  if(c < d){
    printf("Yes\n");
    return 0;
  }else{
    int cnt = 0;
    for (int i = b-2; i <= d; i++) {
      if(s[i] == '.'){
        cnt++;
        if(cnt == 3){
          printf("Yes\n");
          return 0;
        }
      }else cnt = 0;
    }
  }

  printf("No\n");

  return 0;
}