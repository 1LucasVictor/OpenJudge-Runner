#include <stdio.h>
int main(void){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        int m = a, n = b;
        int r = m % n;
        while(r != 0){
            m = n;
            n = r;
            r = m % n;
        }
        int gcd = n;
        int icm = a / n *b;
        printf("%d %d\n",gcd,icm);
    }
}

