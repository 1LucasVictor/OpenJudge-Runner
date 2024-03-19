#include <stdio.h>

int main() {
    int a,b,sum = 0;
    scanf("%d %d",&a,&b);
    //printf("%d %d\n",a, b );
    for(int sockets = 1; sockets < b;) {
        --sockets;
        ++sum;
        sockets += a;
        //printf("%d %d\n", sockets,sum);
        }
    printf("%d\n", sum);
    return 0;
}
