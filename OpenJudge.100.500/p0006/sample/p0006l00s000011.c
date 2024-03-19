#include <stdio.h>
int main (void){

  int n , i , mul=100000;
  
  scanf ("%d",&n);

  for (i = 1 ; i <= n ; i++){
    mul *= 1.05 ;
  }

  if (mul %10000 != 0){
    mul = mul - mul%10000 + 10000 ;
  }
  printf ("%d\n",mul);
  
  return 0 ;
}

    