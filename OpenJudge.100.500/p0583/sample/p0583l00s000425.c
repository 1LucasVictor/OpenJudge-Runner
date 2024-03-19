#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    long long int N,A,B,C,D,d,i;
    scanf("%lld %lld %lld %lld %lld",&N,&A,&B,&C,&D);
    char word[N];
    scanf("%s",word);
    if(C<D)
    {
        for(i=A-1;i+1<D;i++)
    {
        if(word[i]=='#'&&word[i+1]=='#')
        {
            printf("No\n");
            return 0;
        }
    }
        printf("Yes\n");
        return 0;
    }
    else
    {
        for(i=B-1;i+1<D;i++)
        {
            if(word[i]=='.'&&word[i+1]=='.'&&word[i+2]=='.')
            {
                printf("Yes\n");
                return 0;
            }
        }
        printf("No\n");
        return 0;
    }
    return 0;
}