#include <stdio.h>
int main(void){
  int ans=0;
  char s[3];
  scanf("%s",s);

  for(int i=0;i<3;i++){
    if(s[i] == '1') ans ++;
  }
  printf("%d\n",ans);
  return 0;
}

