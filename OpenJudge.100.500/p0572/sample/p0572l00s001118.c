#include<stdio.h>

int main()
{
    long int l,r;
    long int i,j,tmp;
    int tmpd,res = 0;
    
    scanf("%ld %ld",&l,&r);
    
    if(r >= 2019 && r - (r % 673) > l && r - (r % 3) > l)
    {
//        printf("hit\n");
        res = 0;
    }
    else
    {
        res = 673;
        for(i = l;i<r;i++)
        {
            for(j = i + 1;j<r + 1;j++)
            {
                tmp = (i * j) % 2019;
                tmpd = tmp;
                if(tmpd < res)
                {
//printf("update i=%d j=%d mod=%d\n",i,j,tmpd);
                    res = tmpd;
                }
            }
        }
    }
    
    printf("%d\n",res);
    
    return 0;
}
