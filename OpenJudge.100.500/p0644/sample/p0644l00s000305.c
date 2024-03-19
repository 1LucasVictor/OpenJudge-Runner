#include <stdio.h>
int main(void) {
  char seq[4];
  int ans=0;
  scanf("%s",seq);
  for(int i=0;i<4;i++){
    if(seq[i]=='1')
      ans++;
  }
  printf("%d\n",ans);
  return 0;
}
  
  