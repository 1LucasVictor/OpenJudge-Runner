#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
  char s[100005];
  int n,count0=0,count1=0;
  scanf("%s",s);
  n=strlen(s);
  for(int i=0;i<=n-1;i++){
    if(s[i]=='0') count0++;
    if(s[i]=='1') count1++;
  }
  if(count1>count0){
    printf("%d\n",2*count0);
    return 0;
  }else{
    printf("%d\n",2*count1);
    return 0;
  }
}
