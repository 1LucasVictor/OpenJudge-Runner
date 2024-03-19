#include<stdio.h>


int main(void) {
    int a,b,c,no1,no2,no3;

    scanf("%d %d %d",&a,&b,&c);

    no3 = a>=b && a>=c ? a : (b>=c ? b : c);
    no2 = ((a>=b && a<=c) || (a<=b && a>=c)) ? a : (b>=c && b<=a ? b : c);
    no1 = a<=b && a<=c ? a : (b<=c ? b : c);

    printf("%d %d %d\n",no1,no2,no3);

    return 0;
}