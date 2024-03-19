#include <stdio.h>

int main()
{
    int n,m,sub,min,max,add,rest;

    scanf("%d %d", &n,&m);

    add = n + m;

    if(n==m){
        printf("Yay!\n");
        return 0;
    }

    if(n<m){
        min = n;
        max = m;
    }
    else{
        min = m;
        max = n;
    }

    sub = max - min;

    rest = 16 - add;

    if(rest > 2*sub){
        printf("Yay!\n");
    }
    else{
        printf(":(\n");
    }

    return 0;
}
