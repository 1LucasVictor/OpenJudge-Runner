#include <stdio.h>

int main() {
    int a,b,c,d,e,k,f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &k);
    f = e - a;
    if(f <= k){
        printf("Yay!");
    }else{
        printf(":(");
    }
    return 0;
}
