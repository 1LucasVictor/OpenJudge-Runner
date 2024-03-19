#include <stdio.h>

int main(int argc, char const* argv[])
{
    int degree;
    if(scanf("%d",&degree)!=1) return -1;
    if(degree>=30) printf("Yes\n");
    else printf("No\n");
    return 0;
}