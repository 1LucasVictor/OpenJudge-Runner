#include <stdio.h>

int main(int argc, const char * argv[]) {
    char num;
    int g,n,a;
    a=0;
    g = 0;
    while(""){
        while((num = getchar()) != '0'){
            if(num == '\n'){
                printf("%d\n",g);
                g=0;
                a=0;
                continue;
            }
            a =num - '0';
            n =num - '0';
            g += n;
        }
        if(a == 0)break;
        if(num != '0'){
        printf("%d\n",g);
        g=0;
        }
    }
    return 0;
} 

