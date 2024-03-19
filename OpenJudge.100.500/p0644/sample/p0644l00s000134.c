#include<stdio.h>
#include<stdlib.h>
int main(void){
  char a[3];
  int i,ans=0;
  for(i=0;i<3;i++){
    a[i] = getchar();
    ans+=a[i]-'0';
  }
  printf("%d\n",ans);
  return 0;
}