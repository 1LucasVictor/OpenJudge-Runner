#include <stdio.h>

int main(void)
{
    int a,b,t;
    int i;
    int count=0;
    scanf("%d %d %d",&a,&b,&t);

    for(i=1;i<=t;i++){
        if(i%a==0){
            count+=b;
        }
    }

    printf("%d\n",count);

    return 0;
}