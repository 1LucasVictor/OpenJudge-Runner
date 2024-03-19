#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int res = a + a*a + a*a*a;
    printf("%d\n",res);
    return 0;
}