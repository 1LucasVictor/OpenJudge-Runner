#include<stdio.h>
int main()
{
    int p, q, r, s, n, flag;
    while(scanf("%d",&n)!=EOF)
    {
        flag=0;
        for(p=0 ; p<=9 ; p++)
        {
            for(q=0 ; q<=9 ; q++)
            {
                for(r=0 ; r<=9 ; r++)
                {
                    for(s=0 ; s<=9 ; s++)
                    {
                        if(p+q+r+s == n)
                            flag++;
                    }
                }
            }
        }
        printf("%d\n",flag);
    }
    return 0;
}