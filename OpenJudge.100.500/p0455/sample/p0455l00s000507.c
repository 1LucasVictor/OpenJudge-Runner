#include <stdio.h>


int main(void){
    
    int a;
    long int ans;
    scanf("%d",&a);
    ans = a + a*a + a*a*a;
    printf("%ld",ans);

    return 0;
}