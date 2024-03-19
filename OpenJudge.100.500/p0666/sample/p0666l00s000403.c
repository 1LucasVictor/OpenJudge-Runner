#include<stdio.h>
#include<string.h>
#define M 100005
char s1[M],s2[M],s[M],d[M],x[M];
int  a[M],b[M],c[M];
void ss(char s1[],char s2[],int n,int m)
{
    int i,j,a[M],b[M];
    for(i=0; i<n; i++)
        a[i]=s1[n-i-1]-'0';
    for(i=0; i<m; i++)
        b[i]=s2[m-i-1]-'0';
    for(i=0; i<n; i++)
        c[i]=a[i]-b[i];
    for(i=0;i<n;i++)
      if(c[i]<0)
        {
            while(c[i]<0)
            {
              c[i+1]=c[i+1]-1;
              c[i]+=10;
            }
        }
}
int main()
{
    int n,m,i,j,k,kk;
    memset(s1,0,sizeof(s1));
    memset(s2,0,sizeof(s2));
    scanf("%s %s %s",x,s2,s1);
    {
        n=strlen(s1);
        m=strlen(s2);
        if(n>m)
            ss(s1,s2,n,m);
        else if(n<m)
        {
            printf("delicious\n");
            return 0;
        }
        else
        {
            k=strcmp(s1,s2);
            if(k<=0)
            {
                printf("delicious\n");
                return 0;
            }
            else if(k>0)
                ss(s1,s2,n,m);
        }
        if(n>m) kk=n;
        else kk=m;
        while(c[kk]==0) kk--;
        for(i=kk,j=0;i>=0;i--,j++)
        {

            d[j]=(c[i]+'0');
        }
        n=strlen(d);
        m=strlen(x);
        if(n>m)
        {
            printf("dangerous\n");
            return 0;
        }
        else if(n<m)
        {
            printf("safe\n");
            return 0;
        }
        else
        {
            k=strcmp(d,x);
            if(k<=0)
            {
                printf("safe\n");
                return 0;
            }
            else if(k>0)
            {
                printf("dangerous\n");
                return 0;
            }
        }
    }
    return 0;
}
