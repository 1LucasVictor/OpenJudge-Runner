#include <stdio.h>
int main()
{
  int A, B;
  int i;
  int temp;
  scanf("%d %d", &A, &B);
  
  for(i = 0; /*blank*/; ++i){
    temp = (A-1)*i + A;
    if(temp >= B){
      printf("%d\n", i+1);
      return 0;
    }
  }
}