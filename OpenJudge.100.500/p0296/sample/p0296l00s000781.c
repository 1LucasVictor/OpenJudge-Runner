#include<stdio.h>
#include<stdlib.h>
#define N 100

void pop(void);
void push(int);
int k[N],a[2];
int j=0,i,r;

void pop(){
  for(r=0;r<N;r++) if(k[r]==0) break;
  a[0] = k[r-2];
  a[1] = k[r-1];
  k[r-1] = 0;
  k[r-2] = 0;
  j = r - 2;
}

void push(int b){
  k[j] = b;
  j++;
}

int main(){

  int i=0,sum,x;

  char c[N];

  for(x=0;x<N;x++) k[x] = 0;

    while(1){
      scanf("%c",&c[i]);
      r=0;
      if(c[i] == ' ') continue;
      else if(c[i]=='\n') break;
      else if( c[i] == '+'){
	pop();
	sum = a[0] + a[1];
	push(sum);
      }
      else if( c[i] == '*'){
	pop();
	sum = a[0] * a[1];
	push(sum);
      }
      else if( c[i] == '-'){
	pop();
	sum = a[0] - a[1];
	push(sum);
      }
      else{
	push(atoi(&c[i]));
      }
  }
  printf("%d\n",k[0]);
  return 0;
}