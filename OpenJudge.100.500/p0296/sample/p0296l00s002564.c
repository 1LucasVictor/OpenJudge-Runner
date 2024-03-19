#include<stdio.h>
#include<stdlib.h>

int main(){
  char s[100];
  int i,top=0;
  int A[100];

  while(scanf("%s",s) != EOF){
    if(s[0] == '+'){
      A[top-1]=A[top-1] + A[top];
      top--;
    }
    else if(s[0] == '-'){
      A[top-1]=A[top-1] - A[top];
      top--;
    }
    else if(s[0] == '*'){
      A[top-1]=A[top]*A[top-1];
      top--;
    }
    else {
      top++;
      A[top] = atoi(s);
    }
  }
printf("%d\n",A[1]);
  
}

