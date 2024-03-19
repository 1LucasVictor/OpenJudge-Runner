#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x,y,z,a,b;
    scanf("%d",&x);
    y=x/3600;
    z=x%3600;
    a=z/60;
    b=z%60;
    printf("%d:%d:%d\n",y,a,b);
    return 0;
}
