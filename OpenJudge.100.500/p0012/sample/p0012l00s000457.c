#include <stdio.h>

int pop();
int empty();
void push(int);

int data[100] = {0};
int ind = -1;

int main(void){
  int a;

  while(scanf("%d",&a) != EOF){
    if(a) push(a);
    else {
      if(empty() == -1) break;
      printf("%d\n",pop());
    }
  }

  return 0;
}

int pop(){
  ind--;
  return data[ind+1];
}

int empty(){
  return ind;
}

void push(int a){
  ind++;
  data[ind] = a;
}