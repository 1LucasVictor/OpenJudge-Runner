#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  int x,p=0,i;
  int stack[200];
  char s[100];

  while(scanf("%s",s) != EOF){
    if(s[0]=='\n') break;

    /* 演算子よりふたつの数を使う */
    if(s[0]=='+'){
      p--;
      /* printf("%d %d\n",stack[p],stack[p-1]); */
      x=stack[p-1]+stack[p];
      stack[p-1]=x;
      /* printf("%d %d\n",p,stack[p-1]); */
      
    }else if(s[0]=='-'){
      p--;
      x=stack[p-1]-stack[p];
      stack[p-1]=x;
    }else if(s[0]=='*'){
      p--;
      x=stack[p-1]*stack[p];
      stack[p-1]=x;
    }

    else{
      x=atoi(s);
      stack[p]=x;
      p++;
      /* for(i=0;i<p;i++) printf("%d\n",stack[i]); */
    }
  }

  printf("%d\n",stack[0]);

  return 0;
}

