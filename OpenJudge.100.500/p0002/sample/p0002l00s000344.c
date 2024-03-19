#include <stdio.h>

int main()
{
    int cnt, a, b, c, max;
    int i = 0;
    
    scanf("%d",&cnt);
    
    for (i; i < cnt; i++) {
	    scanf("%d %d %d",&a,&b,&c);

        max = a;
        if(b > max) max = b;
        if(c > max) max = c;
    
        if (max == a) {
            if (a*a == b*b+c*c) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else if (max == b) {
            if (b*b == a*a+c*c) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else {
            if (c*c == a*a+b*b) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}