#include<stdio.h>
int main ()
{
    int a , b , rslt ;

    scanf("%d%d" ,&a ,&b) ;

    rslt = a*b ;

    if (rslt%2 ==0 ){
        printf("Even\n");
    }
    else {
        printf("Odd");
    }
    return 0 ;

}
