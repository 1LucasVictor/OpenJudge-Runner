#include <stdio.h>

int main() {
    int a=0,b=0,X=0,c;
    scanf("%d",&X);
    while(X>=500)
    {
        a++;
        X=X-500;
    }
    while(X>=5)
    {
        b++;
        X=X-5;
    }
    c=(a*1000)+(b*5);
    printf("%d\n",c);
    return 0;
}
