
#include <stdio.h>

int main(void)
{
    double k, a, b, i;
    double aa, bb;
    int c = 0;
    
    scanf("%lf", &k);
    scanf("%lf", &a);
    scanf("%lf", &b);

    aa = a / k;
    bb = b / k;

    for(i = 1; i <= 1000; i++){
      if(i >= aa && i <= bb){
        c = 1;
      }
    }

    if(c == 0){
      printf("NG\n");
    }
    else{
      printf("OK\n");
    }
    
    return 0;
}
