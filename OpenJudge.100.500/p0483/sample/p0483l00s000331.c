#include<stdio.h>

int main()
{
    int i,b=0;

    char A[4];
    scanf("%s",A);
    for(i=0;i<3;i++)
    {
        if(A[i]=='7')
        {
            b=1;
            break;
        }
    }
    if(b) printf("Yes\n");

    else printf("No\n");

    return 0;
}
