#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int k = 0;
    int a,b,i = 0;

    int judge = 1;

    scanf("%d",&k);
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++)
    {
        
        if((i % k) == 0){
            judge = 0;
            break;
        }else{
            judge = 1;
        }
        
    }

    if(judge == 0)
    {    
        printf("OK\n");

    }else{

        printf("NG\n");
    }
}