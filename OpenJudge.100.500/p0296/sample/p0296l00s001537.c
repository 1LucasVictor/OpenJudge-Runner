#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
  int i=0,j=0;
  char input[200];
  int stack[200];
  for(i=0;i<200;i++){
    stack[i]='\0';
  }
  i=0;
  fgets(input,200,stdin);
  while(i<strlen(input)-1){
    stack[j]=input[2*i];
    if((stack[j]=='+')&& ('1'<=input[2*(i-1)]) && (input[2*(i-1)]<='9')){
      stack[j-2]=stack[j-2]+stack[j-1]-2*'0';
      stack[j]='E';
      stack[j-1]='E';
      j=j-2;
    }
    if((stack[j]=='+') && ('1'>input[2*(i-1)] ) || (input[2*(i-1)]>'9')){
      stack[j-2]=stack[j-2]+stack[j-1];
      stack[j]='E';
      stack[j-1]='E';
      j=j-2;
    }
    if(stack[j]=='-'){
      stack[j-2]=stack[j-2]-stack[j-1];
      stack[j]='E';
      stack[j-1]='E';
      j=j-2;
    }
    if(stack[j]=='*'&& '1'<=input[2*(i-1)] && input[2*(i-1)]<='9'){
      stack[j-2]=(stack[j-2]-'0')*(stack[j-1]-'0');
      stack[j]='E';
      stack[j-1]='E';
      j=j-2;
    }
    if(stack[j]=='*' && '1'>input[2*(i-1)] || input[2*(i-1)]>'9'){
      stack[j-2]=stack[j-2]*stack[j-1];
      stack[j]='E';
      stack[j-1]='E';
      j=j-2;
    }
    i++;
    j++;
  }
  printf("%d\n",stack[0]);
}