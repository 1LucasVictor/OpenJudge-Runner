#include <stdio.h>

int main(int argc, const char * argv[])
{
    int d = 100000;
    int n;
    
    scanf("%d", &n);
    while (n>0){
        d = d*1.05;
        if (d%1000 != 0) d = (d / 1000) * 1000 + 1000;
        n--;
    }
    printf("%d\n",d);
    return 0;
}