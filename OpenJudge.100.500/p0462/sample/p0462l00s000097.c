#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    unsigned long a;
    double b;
    scanf("%lu%lf",&a,&b);

    unsigned long ans = 0;
    ans = (unsigned long)(a*b);

    printf("%lu\n",ans);
}