#include <stdio.h>

int main(){
    int a,total = 0;
    scanf("%d",&a);
    total += a + a*a + a*a*a;
    printf("%d\n",total);
    return 0;
}
