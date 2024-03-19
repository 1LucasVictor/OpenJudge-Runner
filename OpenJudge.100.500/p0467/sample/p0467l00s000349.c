#include<stdio.h>
int getAns(int a, int b, int c, int k){
    if(k <= a)
        return k;
    else if (k <= a + b)
        return a;
    else
        return a - (k - (a + b));
}
int main(){
    int a, b, c, k;
    scanf("%d %d %d %d", &a, &b, &c, &k);
    printf("%d", getAns(a, b, c, k));
    return 0;
}