#include <stdio.h>

int main()
{
    int a[5]= {0},k=0,i=0,j=0,l=0;
    scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&k);

    for(i=0; i<5; i++)
    {

            for(j=i; j>0; j--)
            {
                if(j!=i)
                {

                    if((a[i]+a[j]<k))
                    {
                        l=1;
                        break;
                    }
                }

            }


    }
    if(l==1)
    {
        printf("Yay!\n");
    }
    else
    {
        printf(":(\n");
    }
    return 0;
}
