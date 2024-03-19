#include <stdio.h>
#include <stdlib.h>
int right=0;
int threaten(int first_x,int second_x,int first_y,int second_y)
{
    if(first_x+second_x==first_y+second_y||first_x-second_x==first_y-second_y||first_x==first_y||second_x==second_y)
    {
        return 1;
    }else
        return 0;
}

int queen(int n,int array[8][8],int a,int b)
{
    int i,j,k;
    if(n==0)
    {
        right=1;
        print(array);
        return 0;
    }
    if(a==8)
        return 0;
    if (array[a][b]!=0)
    {
        if (b==7)
            return queen(n,array,a+1,0);
        else
            return queen(n,array,a,b+1);
    }
    if(right==0)
    {
        for (i=0;i<8;i++)
        {
            for (j=0;j<8;j++)
            {
                if(array[i][j]==1&&threaten(a,b,i,j)==1)
                {
                    if (b==7)
                        return queen(n,array,a+1,0);
                    else
                        return queen(n,array,a,b+1);
                }
            }
        }
        array[a][b]=1;
        if (b==7)
            queen(n-1,array,a+1,0);
        else
            queen(n-1,array,a,b+1);
        array[a][b]=0;
        if (b==7)
            queen(n,array,a+1,0);
        else
            queen(n,array,a,b+1);

    }
    return 0;
}
int print(int array[8][8])
{
    int i,j;
    for (i=0;i<8;i++)
    {
        for (j=0;j<8;j++)
        {
            if(array[i][j]==1)
                printf("Q");
            else
                printf(".");
        }
        printf("\n");
    }
}
int main()
{
    int array[8][8];
    int i,j;
    for (i=0;i<8;i++)
    {
        for (j=0;j<8;j++)
        {
            array[i][j]=0;
        }
    }
    int k;
    scanf("%d",&k);
    int a,b;
    for (i=0;i<k;i++)
    {
        scanf("%d %d",&a,&b);
        array[a][b]=1;
    }
    queen(8-k,array,0,0);
}