//shuffle

#include<stdio.h>
#include<string.h>

int main()
{
    int i=0 ,j=0 ;
    int m=0 ,h=0 ;
    int lenn=0 ;

    char n[201] = {0} ;
    char mem1[201] = {0} ;
    char mem2[201] = {0} ;

    while (1)
    {
        m=0 ;
        memset(n ,0,sizeof n) ;
        scanf("%s" ,n) ;

        if (strcmp(n ,"-") == 0) break ;

        lenn=strlen(n) ;

        scanf("%d" ,&m) ;

        for (i=0 ;i < m ;i++)
        {
            h=0 ;
            memset(mem1 ,0,sizeof mem1) ;
            memset(mem2 ,0,sizeof mem2) ;
            scanf("%d" ,&h) ;
            strncpy(mem1 ,n ,h) ;

            for (j=0 ;j < lenn-h ;j++)
            {
                mem2[j] = n[j+h] ;
            }

            memset(n ,0,sizeof n) ;
            strcat(mem2 ,mem1) ;
            strcpy(n ,mem2) ;
        }

        printf("%s\n" ,n) ;
    }

    return 0 ;
}