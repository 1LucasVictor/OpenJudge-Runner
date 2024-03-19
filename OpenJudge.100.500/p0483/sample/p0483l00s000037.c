#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
  int A=0;
  String N;
scanf("%s",N);
  for (int i=0;i<3;i++){
    if(N[i]=='7'){
    A++;
    }
  }
  if(A>0)
    printf("Yes");
  else
    printf("No");
  return 0;
}