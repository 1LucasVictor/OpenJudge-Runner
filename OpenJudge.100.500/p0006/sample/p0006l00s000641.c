#include<stdio.h>
int adjust(int n){
    if (n % 1000 != 0)
        n += 1000 - n % 1000;
    return n;
}
int exec(int n){
    if (n <= 0)
        return 100000;
    else
        return adjust(1.05 * exec(n-1));
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", exec(n));
    return 0;
}