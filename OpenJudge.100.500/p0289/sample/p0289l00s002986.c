#include<stdio.h>

int a, x, y;

int gcd(int x, int y){
    int z=x%y;
    while(z!=0)
        x=y, y=z, z=x%y;
    printf("%d\n", y);
}

int main(void){
    scanf("%d %d", &x, &y);
    if(y>x)
        a=y, y=x, x=a;
    gcd(x,y);
    return 0;
}
