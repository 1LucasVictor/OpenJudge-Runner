#include <stdio.h>
#include <string.h>
int main(void)
{
  int a=0;int b=0;
  char x[200001];
  char y[200001];
  scanf("%s",x);
  scanf("%s",y);
  for(a=0;a<strlen(x);a++){
    if(x[a]!=y[a]){
      b++;
    }
  }
  printf("%d\n",b);
  return 0;
}
