#include <stdio.h>

int main (){
  int n,aux,q;
  scanf("%d", &n);

  if(n>=500){
      q=n/500;
      aux= n%500;
      printf("%d\n", q*1000+ 5*(aux/5) );
      return 0;
  }
  else{
    q=n/5;
    printf("%d\n", q*5);
  }
  return 0;
}
