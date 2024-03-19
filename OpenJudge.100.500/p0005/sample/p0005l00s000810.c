#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define rad M_PI/3
#define N 2147483647
#define Max 500000
#define NTL -1
#define min(a,b) ((a>b)?b:a)

int main(){
  char str[20];
  int i;
  scanf("%s",str);
  i=strlen(str)-1;
  for(;i>=0;i--){
    printf("%c",str[i]);
  }
  printf("\n");
  return 0;
}
