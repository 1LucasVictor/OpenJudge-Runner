#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char word[200005];
    long long int N,A,B,C,D,i;
    scanf("%lld %lld %lld %lld %lld",&N,&A,&B,&C,&D);
    scanf("%s",word);
    long long int large,small,found=0,flag=0,dummy=-1;
    if(C>D)
    {
        large=C;
        small=D;
    }
    else if(C<D)
    {
        large=D;
        small=C;
    }
    else
    {
        found=1;
    }
    for(i=A-1;i+1<large;i++)
    {
        if(word[i]=='#'&&word[i+1]=='#')
        {
            flag=1;
            break;
        }
    }
    if(C>D)
    {
        dummy=1;
        for(i=B-1;i+2<D;i++)
        {
            if(word[i]=='.'&&word[i+1]=='.'&&word[i+2]=='.')
            {
                dummy=0;
                break;
            }
        }
    }
    if(word[C-1]=='#'||word[D-1]=='#'||word[A-1]=='#'||word[B-1]=='#')
    {
        printf("No\n");
    }
    else if(found)
    {
        printf("No\n");
    }
    else if(flag)
    {
        printf("No\n");
    }
    else if(dummy==1)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    return 0;
}