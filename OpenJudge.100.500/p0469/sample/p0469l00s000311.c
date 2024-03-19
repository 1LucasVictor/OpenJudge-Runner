#include <stdio.h>

int main(void){
    int k, a, b, c = 0;
    scanf("%d%d%d", &k, &a, &b);
    for(a; a <= b; a++){
        if(a%k == 0){
            c = 1;
            break;
        }
    }
    if(c == 0){
        printf("NG\n");
    }else{
        printf("OK\n");
    }
    return 0;
}
