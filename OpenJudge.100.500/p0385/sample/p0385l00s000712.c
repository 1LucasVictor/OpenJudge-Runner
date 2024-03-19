#include <stdio.h>
#include <string.h>

int main(){

  int i,len,sum;
  char str[1001];

  while(1){
    scanf("%s",&str);
    if(str[0]=='0') break;
    sum=0;
    len=strlen(str);
    for(i=0;i<len;i++){
      sum+=str[i]-'0';
    }
    printf("%d\n",sum);
  }
  return 0;
}
