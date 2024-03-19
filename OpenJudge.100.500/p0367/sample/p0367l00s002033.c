#include <stdio.h>

int main(void){

  int a,b,c;
  int i,s;

  scanf("%d%d%d\n",&a,&b,&c);

  s=0;

  for(i=a;i<=b;i++){
    if(c%i == 0){
      s=s+1;
    }
  }

  printf("%d\n",s);

  return 0;
}