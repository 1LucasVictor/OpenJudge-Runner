#include <stdio.h>

int main(void) {
    int a,b,c,k;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    if(a>=k)
    printf("%d",k);
    int count=0;
    if(a<k) {
    if(b>=k-a)
    {
        printf("%d",a);
    }
    if(b<k-a) {
        printf("%d",a-(k-a-b));
    }
    
    }
    return 0;
}

