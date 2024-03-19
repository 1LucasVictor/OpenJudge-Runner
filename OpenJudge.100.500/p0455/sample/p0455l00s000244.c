#include <stdio.h>

int main(){
    int a;
    int b;
    int result;

    scanf("%d",&a);

    if(a <= 10 && a>=1){ 
        result = a + a*a + a*a*a;
        printf("%d", result);
        return 0;
    }
    return 1;
}