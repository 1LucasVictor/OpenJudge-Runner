#include<stdio.h>
#include<string.h>



char ara[4];
char art[4];

int main()
{

    for(int i=0;i<=2;i++)
    {
        scanf("%c",&ara[i]);
    }


    if(ara[1]=='B')
     ara[1]='R';

    else
        ara[1]='B';

    printf("%s\n",ara);

}
