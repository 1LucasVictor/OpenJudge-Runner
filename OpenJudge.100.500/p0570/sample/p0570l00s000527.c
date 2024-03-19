#include <stdio.h>
#include <math.h>

int main() {
    int a,b,k,r;

    scanf("%d %d",&a,&b);
    
    k = (a+b)/2;
    r = (a+b)%2;
    
    if(r == 0){
        printf("%d\n", k);
    }else{
        printf("IMPOSSIBLE\n");
    }

    return 0;
}
