#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
  char s[100000];
  int n, n_one=0, n_zero, i, k;
  scanf("%s", s);
  n = strlen(s);
  
  for(i=0; i<n ;i++){
  	if(s[i]=='0'){
      n_one = n_one + 1;
    }
  }
  n_zero = n-n_one;
  
  if(n_zero>n_one){
    k = n_one*2;
  } else {
    k = n_zero*2;
  }
  
  printf("%d",k);

  return 0;
}