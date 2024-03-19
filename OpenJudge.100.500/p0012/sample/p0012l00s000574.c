#include <stdio.h>

int main()
{
    int v[1000], n, i = 0;
    
    while(scanf("%d", &n) != EOF){
        if(n == 0) printf("%d\n", v[--i]);
        else v[i++] = n;
    }
    return 0;
}