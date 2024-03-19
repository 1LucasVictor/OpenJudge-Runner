#include<stdio.h>
#define NIL -1
int N[44];

int f(int n){
  int a;
  
  if(n == 0 || n == 1){
    N[n] = 1;
    return N[n];
  } 
  
  if(N[n] != NIL){
    return N[n];
  }

  a = f(n - 1) + f(n - 2);
  N[n] = a;
  return a;
}

int main(void){
  int i, n;
  
  scanf("%d",&n);
  
  for(i = 0; i <= n; i++){
    
    N[i] = NIL;
    
  }
  
  i = f(n);
  
  printf("%d\n",i);
  
}