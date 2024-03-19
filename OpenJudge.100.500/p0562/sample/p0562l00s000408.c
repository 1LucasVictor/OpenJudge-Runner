#include <stdio.h>
int main(void) {
    int a, b, c, d;
    scanf("%d%d",&a,&b);
    
    c=1;
    d=0;
    while(1){
        c+=a-1;
        d++;
        if(c>=b) break;
    }
    printf("%d\n",d);
    return 0;
}