#include<stdio.h>


int main(void){

  long int a, b;
  int n;


  while(scanf("%ld %ld", &a, &b) != EOF){
    a += b;

    n=0;
    while(1){
      a /= 10;
      n++;
      if(a==0) break;
    }

    printf("%d\n", n);
  }


  return(0);
}

