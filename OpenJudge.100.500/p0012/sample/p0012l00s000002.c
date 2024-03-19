#include <stdio.h>
int train[1000];
int a,b,c,top = 0;


void push(int x) {
  top++;
 train[top] = x;  

}


int pop() {
  top--;
  return train[top+1];

}


int main() {

  while(scanf("%d",&a) != EOF) {

   
    if(a  == 0) {
      b = pop();
      printf("%d\n",b);
    } else push(a);
  }

  return 0;

}