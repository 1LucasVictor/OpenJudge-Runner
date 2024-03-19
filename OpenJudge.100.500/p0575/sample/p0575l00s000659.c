#include <stdio.h>

int main(int argc, char * argv[]) {
    int x, a;
    scanf("%d %d", &x, &a);
    if(x < a){
        printf("0\n");
    }else{
        printf("10\n");
    }
    return 0;
}