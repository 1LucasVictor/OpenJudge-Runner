#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,n1,n2,temp;
    char str[1000], work[10], rstr[1000];
    scanf("%s",&str);
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&work);
        if(strcmp(work,"replace")==0)
        {
            scanf("%d %d %s",&n1,&n2,&rstr);
            for(i=n1,j=0;i<=n2;i++,j++)
            {
                str[i]=rstr[j];
            }
        }
        if(strcmp(work,"reverse")==0)
        {
            scanf("%d %d",&n1,&n2);
            for(i=n1,j=0;i<=n2;i++,j++)
            {
                rstr[j]=str[i];
            }
            j--;
            for(i=n1;i<=n2,j>=0;i++,j--)
                str[i]=rstr[j];
        }
        if(strcmp(work,"print")==0)
        {
            scanf("%d %d",&n1,&n2);
            for(i=n1;i<=n2;i++)
            {
                printf("%c",str[i]);
            }
            printf("\n");
        }
    }
    return 0;
}

