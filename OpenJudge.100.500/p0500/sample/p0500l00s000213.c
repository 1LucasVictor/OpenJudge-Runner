#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define ll long long int

int main(void)
{
    int N,M;

    scanf("%d %d",&N,&M);

    int arr1[M];
    int arr2[M];
    for (int j=0; j<M; j++)
        scanf("%d %d",&arr1[j],&arr2[j]);

    char S[4]= {'\0'};
    char c[1]={'\0'};
    int min1=INT_MAX;
    int min2=INT_MAX;
    int count =0;
    for (int j=0; j<M; j++)
    {
        if (arr1[j]==1)
        {
            if (arr2[j]<min1)
            {
                min1=arr2[j];
                c[1] = min1 +'0';
                strcat(S,c);
                count++;
            }
        }
    }
    if (count==0 || strcmp(S,"0")==0)
    {
        printf("-1");
        exit(0);
    } //Please check if exit(0) is the same as return 0
    char  ch[1]={'\0'};
    count = 0;
    for (int i=2; i<=M; i++)
    {
        for (int j=0; j<M; j++)
        {
            if (arr1[j]==i)
            {
                if (arr2[j]<min2)
                {
                    min2=arr2[j];
                    ch[1] = min1 +'0';
                    sprintf(ch, "%d", min2);
                    count++;
                }
            }
        }
        if (count == 0)
            strcat(S,"0");
        else {strcat(S,ch);}
        min2=INT_MAX;
        count = 0;
    }

    printf("%s",S);


    return EXIT_SUCCESS;
}

