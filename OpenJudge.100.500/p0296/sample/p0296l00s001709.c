#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
  int i=0,j=0;
  char op,c;
  int stack[200],num,flag;
  for(i=0;i<200;i++){
    stack[i]='\0';
  }
  i=0;
  while(1){
    flag=-1;
    c=getchar();
    if(feof(stdin)!=0){
      break;
    }
    if('1'<=c && c<='9'){
      ungetc(c,stdin);
      flag=1;
      scanf("%d",&num);
    }else if(c!=' ' && c!='\n'){
      ungetc(c,stdin);
      flag=0;
      scanf("%c",&op);
    }
    if(flag==1){
      stack[j]=num;
    }
    if(flag==0){
      stack[j]=op;
    }
    if(stack[j]=='+'){
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
    if(stack[j]=='*'){
      stack[j-2]=stack[j-2]*stack[j-1];
      stack[j]='E';
      stack[j-1]='E';
      j=j-2;
    }
    if(flag==0 || flag==1){
      j++;
    }
  }
  printf("%d\n",stack[0]);
}