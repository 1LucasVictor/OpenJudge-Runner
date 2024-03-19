#include <stdio.h>
#include <string.h>
#define N 20

int main(){

  int i;
  char str[N];

  scanf("%s", str);

  for(i=strlen(str);i>=1;i--){

    printf("%c", str[i-1]);

    if(i-1==0){

      printf("\n");

    }

  }

  return 0;

}