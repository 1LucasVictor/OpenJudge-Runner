#include <stdio.h>

int main(){
  int sum,i;
  char num[1001];

  while(1){
    scanf("%s",num);
    if(num[0]=='0') break;
    for(sum=0,i=0;num[i]!='\0';i++){
      sum+=(num[i]-'0');
    }
    printf("%d\n",sum);
  }
    
  return 0;
}