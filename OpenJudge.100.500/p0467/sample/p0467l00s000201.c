#include<stdio.h>
int main(){
    int a, b, c, d, k;
    scanf("%d %d %d %d", &a, &b, &c, &k);
    if(a >= k){
        printf("%d\n", k);
    }else{
        d = k - a;
        if(b >= d){
            printf("%d\n", a);
        }else{
            printf("%d\n", a - (k - a - b));
        }
    }
    return 0;
}