#include<stdio.h>
#include<string.h>

int main()
{
    int i=0 ,j=0 ;
    int q=0 ;
    int a=0 ,b=0 ;
    char str[1001] = {0} ;
    char cmd[10] = {0} ;
    char p[1001] = {0} ;
    char mem[1001] = {0} ;
    char mem2[1001] = {0} ;

    scanf("%s" ,str) ;
    scanf("%d" ,&q) ;
    for (i=0 ;i < q ;i++)
    {
        memset(p ,0 ,sizeof p) ;
        memset(mem ,0 ,sizeof mem) ;
        memset(mem2 ,0 ,sizeof mem2) ;

        scanf("%s" ,cmd) ;
        scanf("%d %d" ,&a ,&b) ;

        if (strcmp(cmd ,"print") == 0)
        {
            for (j=a ;j <= b ;j++)
            {
                printf("%c" ,str[j]) ;
            }
            printf("\n") ;
        }
        else if (strcmp(cmd ,"reverse") == 0)
        {
            for (j=a ;j <= b ;j++)
            {
                mem[j-a]=str[j] ;
            }
            for (j=0 ;j <= b-a ;j++)
            {
                mem2[(b-a)-j]=mem[j] ;
            }
            for (j=a ;j <= b ;j++)
            {
                str[j]=mem2[j-a] ;
            }
        }
        else if (strcmp(cmd ,"replace") == 0)
        {
            scanf("%s" ,p) ;
            for (j=a ;j <= b ;j++)
            {
                str[j]=p[j-a] ;
            }
        }

    }

    return 0 ;
}