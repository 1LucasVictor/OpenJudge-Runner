#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    
    int num=a;
    int i=1;
    while(num<b){
        num+=a-1;
        i++;
    }
    printf("%d\n", i);
    return 0;
}
