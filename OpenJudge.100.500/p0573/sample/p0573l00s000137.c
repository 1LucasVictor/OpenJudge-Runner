#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
  char s[5];
  int cnt = 0;
  int cnt2 = 0;
  int i,j;

  scanf("%s", s);

  for(i = 0;i < 4;i++){
    for(j = i + 1;j < 4;j++){
      if(s[i] == s[j]) cnt++;
    }
  }

  if(cnt == 2) printf("Yes\n");

  else printf("No\n");

  return 0;
}
