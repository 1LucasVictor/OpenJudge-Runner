#include <stdio.h>

int main(int argc, char *argv[]){
  int i;
  int a,b,c;
  int count=0;

  scanf("%d %d %d", &a, &b, &c);
  for(i=a; i<=b; i++){
    if( c%i == 0)
      count++;
  }
  printf("%d\n", count);
  return(0);
}
