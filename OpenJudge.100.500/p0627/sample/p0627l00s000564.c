#include <stdio.h>

int main()
{
    int A,B,max;
    scanf("%d%d",&A,&B);
    if( A*B >= A+B ){
        if( A*B >= A-B ){
            max = A*B;
        }else{
            max = A-B;
        }
    }else{
        if( A+B >= A-B ){
            max = A+B;
        }else{
            max = A-B;
        }
    }
  printf("%d\n",max);
}