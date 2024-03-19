#include<stdio.h>
#include<stdlib.h>
	int main(){
      int A, B;
      scanf("%d %d", &A, &B);
      if(abs(A - B) <= 1)　{printf("Yay!");}
      else　{printf(":(");}
      return 0;
    }
