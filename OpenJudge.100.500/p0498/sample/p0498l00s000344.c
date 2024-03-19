#include <stdio.h>

int main(){
  int N;
  int page;

  scanf("%d",&N);

  page = N/2;
  if (N%2!=0) page+=1;
  printf("%d\n",page);
}