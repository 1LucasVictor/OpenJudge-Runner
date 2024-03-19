//1803115
#include<stdio.h>
#include<stdlib.h>
int main()
{
    long n,m,l,x,i,j,k,*a,*b,*c;
    scanf("%ld %ld %ld",&n,&m,&l);
    a=(long *)malloc(n*m*sizeof(long));
    for(i=0;i<n*m;i++)
    {
        scanf("%ld",&x);
        *(a+i)=x;
    }
    b=(long *)malloc(m*l*sizeof(long));
    for(i=0;i<m*l;i++)
    {
        scanf("%ld",&x);
        *(b+i)=x;
    }
    c=(long *)malloc(n*l*sizeof(long));
    for(i=0;i<n*l;i++) *(c+i)=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            for(k=0;k<m;k++)
            {
                *(c+i*l+j)+=*(a+i*m+k) * *(b+k*l+j);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            if(j==l-1) printf("%ld",*(c+i*l+j));
            else printf("%ld ",*(c+i*l+j));
        }
        printf("\n");
    }
    free(a);
    free(b);
    free(c);
    return 0;
}
