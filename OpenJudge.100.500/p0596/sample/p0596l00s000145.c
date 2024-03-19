#include<stdio.h>
#include<string.h>
int main(void){
  int one=0,zero=0;
  char S[100003]={'\0'};
  scanf("%s",S);
  for(int i=0;i<strlen(S);i++){
    if(S[i]=='0'){
      zero++;
    }else{
      one++;
    }
  }
  if(zero>one){
    printf("%d\n",one*2);
  }else{
    printf("%d\n",zero*2);
  }
  return 0;
}