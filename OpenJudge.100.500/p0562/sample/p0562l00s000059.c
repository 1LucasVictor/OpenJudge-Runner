#include <stdio.h>
int main()
{
  int A, B;
  int i;
  int plug;
  scanf("%d %d", &A, &B);
  for(i = 0; /* inf */; ++i){
    plug = i * (A-1);
    if((plug + A) >= B){
      printf("%d\n", i + 1);
      return 0;
    }
  }
}