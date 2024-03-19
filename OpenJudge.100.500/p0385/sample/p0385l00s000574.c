#include <stdio.h>

int main(){

  int sum,i;
  char s[1001];
  while(1){
    scanf("%s",s);
    if(s[0]=='0')break;
    sum=0;
    i=0;
    while(s[i]){
      sum += s[i]-'0';
      i++;
    }
    printf("%d\n",sum);
  }
  return 0;
}