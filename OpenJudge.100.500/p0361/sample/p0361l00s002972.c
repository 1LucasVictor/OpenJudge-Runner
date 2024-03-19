#include <stdio.h>
int main(int argc, const char * argv[]) {
    int S,h,m,s;
    h=0;
    m=0;
    s=0;
    scanf("%d",&S);
    h=S/3600;
    m=(S%3600)/60;
    s=S%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}