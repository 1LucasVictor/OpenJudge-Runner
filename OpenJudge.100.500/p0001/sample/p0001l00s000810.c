#include <stdio.h>

int main(void){
    int a,b;
    int i=0,sum=0;

    while(scanf("%d %d", &a,&b) != EOF){
        sum = a + b;
        while(sum){
            sum /= 10;
            i++;
            }
            printf("%d\n",i);
            i=0;
    }
    return(0);
}