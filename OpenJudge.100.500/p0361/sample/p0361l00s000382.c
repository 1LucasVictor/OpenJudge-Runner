#include<stdio.h>

int main() {
    int S ;
    int h ;
    int m ;
    int s ;

    scanf("%d",&S);
    if (S > 60) {
        m = S / 60;
        if (m > 60) {
            h = m / 60;
            m = m % 60;
        }
    } 
    s = S % 60;
    printf("%d:%d:%d\n",h,m,s);
}
