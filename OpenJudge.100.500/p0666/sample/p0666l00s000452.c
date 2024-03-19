#include <stdio.h>
int main(void){
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if(b-a<=0)
    {
        printf("delicious");
        return 0;
    }
    if(n>=b-a)
    {
        printf("safe");
        return 0;
    }
    if(b-a>n)
    {
        printf("dengerous");
        return 0;
    }
}