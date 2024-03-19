#include <stdio.h>
#include <stdlib.h>

int xxx(int a, int b){
    if(b==0) return a;
    return xxxx(b, a%b);
}
int xxxx(int a, int b){
    while(b!=0){
        int t;
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int main()
{
    int a, b;

    scanf("%d%d",&a,&b);
    int t = xxx(a, b);
    printf("%d\n",t);
    return 0;
}

