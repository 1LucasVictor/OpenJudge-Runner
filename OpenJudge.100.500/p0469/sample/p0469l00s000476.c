#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);
    for(i=b;i<=c;i++)
            {
        if(i%a==0){
            printf("OK\n");
            return 0;
        }


        }
        printf("NG\n");

            return 0;
    }


