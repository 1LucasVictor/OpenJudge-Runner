#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,a,b;
    int i,sum;
    scanf("%d",&k);
    scanf("%d %d",&a,&b);
    for(i=1;i<=1000;i++){
        sum=i*k;
        if(sum>=a && sum<=b){
            printf("OK");
            break;
        }
        else if(sum>b){
            printf("NG");
            break;
        }
    }
    return 0;
}
