#include <stdio.h>
int main(void){
    // Your code here!
    long x,a,b;
    scanf("%ld%ld%ld",&x,&a,&b);
    if(a>b) printf("delicious");
    else if(a+x>b) printf("safe");
    else printf("dangerous");
    return 0;
}
