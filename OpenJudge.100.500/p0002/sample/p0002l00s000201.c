#include <stdio.h>

//直角三角形か判定
int rt(int a, int b, int c) {
    int tmp;
    if(a > c) {
        tmp = a;
        a = c;
        c = tmp;
    }
    if(b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }
    if(a*a+b*b == c*c) return 1;
    else return 0;
}

int main(void){

    int n;
    int a, b, c;
    
    scanf("%d\n", &n);
    while(n--) {
        scanf("%d %d %d\n", &a, &b, &c);
        if (rt(a,b,c) == 1) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}
