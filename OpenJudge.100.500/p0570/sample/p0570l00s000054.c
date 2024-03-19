#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int i;
  int A, B;

  scanf("%d", &A);
  scanf("%d", &B);

  for(i=0; i<=1000000000; i++){
    if(abs(A-i) == abs(B-i)){
      printf("%d", i);
      break;
    }
    if(i==1000000000){
      printf("IMPOSSIBLE");
    }
  }

  return 0;

}