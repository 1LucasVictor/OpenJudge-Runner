#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,sum;
  char now,stream[1001];

  scanf("%s",stream);
  i=0;

  while(!(stream[0]=='0' && stream[1]=='\0')){
    i=0;
    sum=0;
    while(stream[i]!='\0'){
      now=stream[i];
      sum=sum+atoi(&now);
      i++;
    }
    printf("%d\n",sum);
    scanf("%s",stream);

  }

  return 0;
}