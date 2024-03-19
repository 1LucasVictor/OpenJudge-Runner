#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(c < b){
        int temp = b;
        b = c;
        c = temp;
    }
    if(b < a){
        int temp = a;
        a = b;
        b = temp;
    }
    if(c < b){
        int temp = b;
        b = c;
        c = temp;
    }

    printf("%d %d %d\n", a, b, c);
}
