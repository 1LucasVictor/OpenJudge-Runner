#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 10000

int linear_search(int a, int b);
void input(int a[]);

int main(void)
{
    int count=0;
    char null;
    int n,q;
    int S[MAX];
    int T[MAX];
    scanf("%d",&n);
    getchar();
    input(S);    
    scanf("%d",&q);
    getchar();
    input(T);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            count+=linear_search(S[i],T[j]);
        }
    }
    printf("%d\n",count);


    return 0;
    
}

int linear_search(int a, int b)
{
    if(a == b){return 1;}
    else{return 0;}
}
void input(int a[])
{
    char str[MAX];
    int x;
    int j=0;
    fgets(str,MAX,stdin);
    int i=0;
    while(str[i]>=' ')
    {
        while(isspace(str[i])){i++;}
        if(isdigit(str[i]))
        {
            x=0;
            while(isdigit(str[i]))
            {
                x=10*x+(str[i]-'0');
                i++;
            }
            a[j]=x;
            j++;
        }
        else
        {
            i++;
        }
    }
}
