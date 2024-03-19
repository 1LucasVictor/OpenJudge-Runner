#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,n1,n2;
    int flg=0;

    scanf("%d %d",&a,&b);



    int i;
    for(i=0;i<1000000000;i++){
        n1=abs(a-i);
        n2=abs(b-i);
        if(n1==n2){
            printf("%lld\n",i);
            flg=1;
            break;
        }
    }

    if(flg==0){
         printf("IMPOSSIBLE\n");
    }

    return 0;
}