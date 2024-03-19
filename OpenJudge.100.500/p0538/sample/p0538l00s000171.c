#include <stdio.h>
int main () {
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    for (int i=1;i<=9;i++) {
        for (int j=1;j<=9;j++) {
            if (a*b==i*j) {c=a*b;break;}
        }
    }
    if (c>0) printf("%d\n",c);
    else printf("%d\n",-1);
    return 0;
}
