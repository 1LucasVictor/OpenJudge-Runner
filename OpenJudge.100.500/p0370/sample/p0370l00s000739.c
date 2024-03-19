#include<stdio.h>
int main(void){
    int a, b;
    char ap;
    while(1){
        scanf("%d %c %d", &a, &ap, &b);
        if(ap=='?'){
            break;
        }
        else if(ap=='+'){
            printf("%d\n", a+b);
        }
        else if(ap=='-'){
            printf("%d\n", a-b);
        }
        else if(ap=='*'){
            printf("%d\n", a*b);
        }
        else if(ap=='/'){
            printf("%d\n", a/b);
        }
    }
    return 0;
}
