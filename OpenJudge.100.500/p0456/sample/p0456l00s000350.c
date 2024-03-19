#include<stdio.h>
#include<string.h>

int main()
{
    char ch1[200001],ch2[200001];
    int count=0,len=0,i;

    scanf("%s",&ch1);
    scanf("%s",&ch2);

    len = strlen(ch1);

    for(i=0 ; i<len ; i++)
    {
        if(ch1[i]!=ch2[i])
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
