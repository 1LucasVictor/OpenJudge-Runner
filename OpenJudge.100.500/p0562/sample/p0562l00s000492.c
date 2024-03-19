#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    
    int num=1;
    int i=0;
    while(num<b){
        num+=a-1;
        i++;
    }
    printf("%d\n", i);
    return 0;
}
