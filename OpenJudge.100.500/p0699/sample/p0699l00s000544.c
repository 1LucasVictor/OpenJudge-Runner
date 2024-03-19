#include <stdio.h>

int main(void){
    int f1=0,s1=0,a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a % 5 == 0)
        f1++;
    if(a % 7 == 0)
        s1++;
    if(b % 5 == 0)
        f1++;
    if(b % 7 == 0)
        s1++;
    if(c % 5 == 0)
        f1++;
    if(c % 7 == 0)
        s1++;
    if(f1 == 2 && s1 == 1)
        puts("YES");
    else
        puts("NO");

    return 0;
}
