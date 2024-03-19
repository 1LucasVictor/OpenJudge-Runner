#include<stdio.h>

int main()
{
    int H,A,i;

    scanf("%d%d",&H,&A);

    i=0;
    while(1)
    {
        H=H-A;
         i++;

        if(H<=0)
        {
            break;
        }
    
    }

printf("%d",i);

}
