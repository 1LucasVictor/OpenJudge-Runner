#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 200000

void swap(int* a,int* b){
  int c=*a;
  *a=*b;
  *b=c;
}

#define d_flag 1

char s[MAX+1];
int flag=1;

void naka(int a,int b){
  int i;
   flag=0;
  for(i=a;i<=b;i++){
    if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
      flag=1;
      break;
    }
  }
}

int judge(int a,int b){
  int i;
  for(i=a;i<b;i++){
    if(s[i]=='#' && s[i+1]=='#'){
      flag=0;
      break;
    }
  }
}

int main(){
  int n,a,b,c,d;

  scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
  a--;b--;c--;d--;

  scanf(" %s",s);


  if(a>b){
    swap(&a,&b);
    swap(&c,&d);
  }

  if(c>d){
    naka(b,d);
  }
  judge(a,c);
  judge(b,d);

  printf("%s",flag?"Yes":"No");
}

