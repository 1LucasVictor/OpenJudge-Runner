#include<stdio.h>
int main(){
  int i,ans=0;
  char s[5];
  scanf("%s",s);
  for(i=0;i<3;i++){
    (s[i]=='1')?ans++:ans;
  }
  printf("%d\n",ans);
  return 0;
}