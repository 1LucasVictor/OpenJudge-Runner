#include<stdio.h>

int main() {
    int S,h,m,s;

    scanf("%d",&S);


    printf("%d:%d:%d\n",h = S/3600,m = S%3600/60,s = S%3600%60);
    return 0;
}

