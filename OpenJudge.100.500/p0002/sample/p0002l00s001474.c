#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a*a + b*b == c*c ||
            b*b + c*c == a*a ||
            c*c + a*a == b*b)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}