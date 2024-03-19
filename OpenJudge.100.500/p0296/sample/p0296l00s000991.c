#include <stdio.h>
#include <stdlib.h>

void push(int n);

int pop(void);

int s[100];
int a = 0;

int main(){

  char b[100];
  int u,i = 0;
  int b1,b2;
 
  while((b[i]=getchar()) != '\n'){
    i++;
  }

  for(u = 0;u<i;u++){

    if(u != 1 && u%2 != 1){

    if(b[u] == '+'){
      push(pop()+pop());
    }

    else if(b[u] == '-'){
      b1 = pop();
      b2 = pop();
      push(b2 - b1); 
    }

    else if(b[u] == '*'){  
     push(pop()*pop());
    }

    else{
      push(((int)b[u]-48));
    }

    } 
  }
  
  printf("%d\n",pop());
  return 0;
}

void push(int n){
    a = a +1;
   s[a] = n;  
}

int pop(){
  if(a == 0)
    return 0;
  else{
  a = a -1;
  return s[a+1];
  }
}



