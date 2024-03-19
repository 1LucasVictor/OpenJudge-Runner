#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100

int A[N],top=0;
   
int main(){
  int a,b,c;
  char s[N];
     
  while(scanf("%s",s)!=EOF){
    if(s[0]=='+'){
      a = A[top-2];
      b = A[top-1];
      c = a + b;
      A[top-2] = c;
      top = top -1;
    }
    else if(s[0]=='-'){
      a = A[top-2];
      b = A[top-1];
      c = a - b;
      A[top-2] = c;
      top = top -1;
    }
    else if(s[0]=='*'){
      a = A[top-2];
      b = A[top-1];
      c = a * b;
      A[top-2] = c;
      top = top -1;
    }
    else{
      A[top] = atoi(s); 
      top = top + 1;
    }
  }
   
  printf("%d\n",A[0]);
    
  return 0;
}