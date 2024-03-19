#include <stdio.h>
int main(){
  char num[1200];
  int sum=0, i=0, number;
 
  while(1){
    scanf("%s",num);
    if(num[0]=='0')break;
    while(1){
      if(num[i]=='\0')break;
      number=num[i]-'0';
      sum=sum+number;
      i++;
    }
    printf("%d\n",sum);
    sum=0;
    i=0;
  }
  return 0;
}