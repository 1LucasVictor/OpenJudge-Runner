#include <stdio.h>
int main(){

  int a,b,i;

  while(scanf("%d %d",&a,&b) !=	EOF){

    a += b;

    for(i = 0; a/10 != 0; i++) a /= 10;

    printf("%d\n",i+1);

  }

  return 0;

}