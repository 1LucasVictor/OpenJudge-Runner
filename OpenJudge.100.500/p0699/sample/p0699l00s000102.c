#include <stdio.h>

int main(void){
  int a;
  int cnt[2] = {0,0};

  for(int i = 0;i < 3;i++){
    scanf("%d",&a);
    if(a == 5) cnt[0]++;
    if(a == 7) cnt[1]++;
  }

  if(cnt[0] == 2 && cnt[1] == 1) printf("YES\n");
  else printf("NO\n");


  return 0;
}