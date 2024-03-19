#include<stdio.h>
int main()
{
    int k, a, b, count = 0;
    scanf("%d%d%d",&k,&a,&b);
    int i;
    for( ; a <= b; a++){
        if(a % k == 0){
            count++;
        }

    }
    //printf("i: %d\n",i);
    if(count > 0){
        printf("OK\n");
    }
    if(count == 0) {
        printf("NG\n");
    }


    return 0;
}
