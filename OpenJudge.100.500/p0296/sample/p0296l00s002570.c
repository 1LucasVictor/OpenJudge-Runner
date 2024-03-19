#include <stdio.h>
#include <stdlib.h>

#define N 200
#define C 10000

int s[N], sp, ssp;

int pop();
void push(int);
int pops();

int main(){

  int i;
  int count = 0, n = 0;
  char in[N][C];
  int out;

  i = 0;
  while(scanf("%s", in[i]) != EOF){
    
    count++;
    i++;
  }
  
  for(i = 0; i < count; i++){
    
    
    
    if(in[i][0] == '+'){

      out = pop() + pop();
      push(out);
	
    }
    
    else if(in[i][0] == '-'){

      out = pop() - pop();
      out *= -1;
      push(out);

    }
    
    else if(in[i][0] == '*'){
      out = pop() * pop();
      push(out);

    }
    else {
      out = atoi(in[i]);
      push(atoi(in[i]));
    }

    //printf("%d %d\n", sp ,out);

  }
  
  printf("%d\n", out);

  return 0;
}

int pop(){

  sp--;

  return s[sp];
}


void push(int d){

  s[sp] = d;

  sp++;

}

int pops(){

  ssp--;

  return s[ssp + 1];
}