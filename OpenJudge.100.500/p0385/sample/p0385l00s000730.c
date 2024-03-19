#include<stdio.h>
int main()
{
    int i,s;
char A[10000];
while(1)
{
    scanf("%s",A);
    s=0;
    if(A[0]=='0')
    {
        break;
    }
    else
    {
        for(i=0;A[i]!='\0';i++)
        {
           s+=A[i]-'0';
        }
    }
    printf("%d\n",s);
}
}

