#include <stdio.h>

int main(){
  int A,B,min;
  scanf("%d",&A);
  scanf("%d",&B);
  if(B==1)
    min = 0;
  else if(A>=B)
    min = 1;
  else{
    min = (B-1)/(A-1);
    if((B-1)%(A-1)!=0)
      min++;
  }
  printf("%d\n",min);
  return 0;
}
    
