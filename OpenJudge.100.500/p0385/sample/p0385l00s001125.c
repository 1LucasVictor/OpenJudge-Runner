#include<stdio.h>
main(){
  char number[1001];
  int num,sum=0;
  int j;
  while(1){
    scanf("%s",number);
    if(number[0]=='0')
      break;
    for(j=0;number[j]!='\0';j++){
      num=number[j]-'0';
      sum=sum+num;
    }
    printf("%d\n",sum);
    sum=0;
  }
  return 0;
}