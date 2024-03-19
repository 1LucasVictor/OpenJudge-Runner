#include <stdio.h>
int main(){
    long int a;
    double long b;
    scanf("%ld %Lf",&a,&b);
    long double c=a*b;
    long int d = c;
    printf("%ld\n",d);

    return 0;
}