#include<stdio.h>
#include<string.h>
int s[8][8];
int a[8],book[8],b[16],c[16];
void add(int x)
{
    int i,j;
    if(x==8)
    {
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(s[i][j])
                {
                    if(a[i]!=j)
                        return;
                }
            }
        }
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(a[i]==j)
                    printf("Q");
                else
                    printf(".");
            }
            printf("\n");
        }
        return;
    }
    for(i=0;i<8;i++)
    {
        if(book[i]||b[x+i]||c[x-i+7])
            continue;
        a[x]=i;
        book[i]=b[x+i]=c[x-i+7]=1;
        add(x+1);
        book[i]=b[x+i]=c[x-i+7]=0;
    }
}
int main()
{
    memset(s,0,sizeof(s));
    memset(a,0,sizeof(a));
    memset(book,0,sizeof(book));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    int n;
    scanf("%d",&n);
    int r,l;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&r,&l);
        s[r][l]=1;
    }
    add(0);
    return 0;
}

