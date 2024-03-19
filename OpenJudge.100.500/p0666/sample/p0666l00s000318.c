#include <stdio.h>
#include <math.h>
int main(void){
    int a,b,x;
    int z;
    scanf("%d %d %d",&x,&a,&b);
    z=a-b;
    if(z>=0) printf("delicious\n");
    else if(z<0 && abs(z)<=x) printf("safe\n");
    else printf("dangerous\n");
    return 0;
}