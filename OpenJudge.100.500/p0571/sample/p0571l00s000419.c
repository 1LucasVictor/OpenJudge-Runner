#include<stdio.h>

int main(){
    int n, a, b;
    int s, t;
    scanf("%d %d %d", &n, &a, &b);
    s = n * a;
    if(s < b){
        printf("%d\n", s);
    }else
    {
        printf("%d\n", b);
    }
    
    return 0;
}