#include <stdio.h>

int a,b,r,c;


int main( ){


  while(1){

        if(scanf("%d %d", &a, &b) != 2)
             break;
        if(a < b){
       c = a;
       a = b;
       b = c;
        }

        if(b < 1)
          continue;

     while((r = a % b) != 0){
        a = b;
        b = r;
     }

    printf("%d\n", b);

  }

return 0;

}