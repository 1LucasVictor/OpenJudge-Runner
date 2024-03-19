#include <stdio.h>
int main(void){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a >= c){
        if(b >= d){
            int e =d-a;
            printf("%d", e);
            
        }
        else {
            int e = b-a;
            printf("%d", e);
        }
    }
    else if (b >= d){
        int e = d-c;
        printf("%d", e);
    }
    else {
        int e = b-c;
        printf("%d", e);
    }
}