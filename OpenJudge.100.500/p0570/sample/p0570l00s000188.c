#include "stdio.h"

int main(void){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = (a+b)/2,b+=a;
    if(b%2){
      puts("IMPOSSIBLE\n");
    }else{
      printf("%d\n",c);
    }
}
