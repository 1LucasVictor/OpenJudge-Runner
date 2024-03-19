#include <stdio.h>
int main(void) {
    int a, b, c, d;
    scanf("%d%d",&a,&b);
    
    c=1;
    d=0;
    while(c<b){
        c+=a-1;
        d++;
    }
    printf("%d\n",d);
    return 0;
}