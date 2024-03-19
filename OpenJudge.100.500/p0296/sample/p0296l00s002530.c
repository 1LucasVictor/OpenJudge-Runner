#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct{
  int size;
  int A[102];
}stack;


int main(){
  char c[15]="";//文字列の初期化
  char d;
  int i;
  stack *S;
  S=malloc(sizeof(stack));
  S->size=0;//ここで初期化

  while(1){
    scanf("%[^ \n]%c",c,&d);
    if(c[0]=='+'){
      S->A[S->size -1]=S->A[S->size -1]+S->A[S->size];
      S->size-=1;
    }
    else if(c[0]=='-'){
      S->A[S->size -1]=S->A[S->size -1]-S->A[S->size];
      S->size-=1;
    }
    else if(c[0]=='*'){
      S->A[S->size -1]=S->A[S->size -1]*S->A[S->size];
      S->size-=1;
    }
    else{
      S->A[S->size +1]=atoi(c);
      S->size+=1;
    }
    if(d=='\n') break;
  }
  printf("%d\n",S->A[S->size]);
  return 0;
}
