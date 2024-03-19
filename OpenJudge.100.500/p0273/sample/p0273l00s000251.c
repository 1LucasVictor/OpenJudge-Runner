#include<stdio.h>

#define MAX 44  

int main(){
    
  int i, n;
  int fibo[MAX];
 
  scanf("%d",&n);

  for(i = 0; i <= n; i++){

    if(i == 0) 
      fibo[0] = 1;

    if(i == 1) 
      fibo[1] = 1;

    if(i > 1) 
      fibo[i] = fibo[i - 1] + fibo[i - 2];

    if(i == n) 
      printf("%d\n", fibo[i]);
  
  }
 
  return 0;

}