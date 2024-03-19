#include <stdio.h>

void main()
{

  int stack[100];
  int top=0,i;
  char ch;
  for (i=0;i<100;i++){
    stack[i]=0;
  }
  while ((ch=getchar())!='\n'){
    if (ch=='+'){
      stack[top-2]=stack[top-2]+stack[top-1];
      top=top-1;
    }else if(ch=='*'){
      stack[top-2]=stack[top-2]*stack[top-1];
      top=top-1;
    }else if(ch=='-'){
      stack[top-2]=stack[top-2]-stack[top-1];
      top=top-1;
    }else if (ch!=' '){
      stack[top]=ch-'0';
      top++;
    }
  }
  printf("%c\n",(char)stack[top-1]+'0');

}