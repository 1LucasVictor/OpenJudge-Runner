#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

#define M 10000

  
  int top;
  int S[M];

  
bool isEnpty(int *S){
  if(top == 0) return true;
  else return false;
}

void push(int *S,int x){
  top = top + 1;
  S[top] = x;

}
  

int pop(int *S){
 
  if(isEnpty(S) == true) printf("underflow\n");
  else top =top - 1;
 
  return S[top + 1];
 
}
   
 
 
int main(){

  char p[M];
  int i,j,k,a,b;
 
  S[0] = '0';

  while(scanf("%s",p) != EOF){

    if(p[0] == ' ') continue;
    
    if(p[0] == '+'){

      a = pop(S);
      b = pop(S);
      push(S,b+a);
    }

   
    else if(p[0] == '-'){

      a = pop(S);
      b = pop(S);
      push(S,b-a);
    }
    else if(p[0] == '*'){
   
      a = pop(S);
      b = pop(S);
      push(S,b*a);
    }
    else {

      push(S, atoi(p));
    }

  }


  
  printf("%d\n",S[top]);
 
   
  return 0;
}

