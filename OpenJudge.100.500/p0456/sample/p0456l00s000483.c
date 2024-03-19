#include <stdio.h>
#include<string.h>

int main()
{
    char S[1000],T[1000];
    fgets(S,1000,stdin);
    fgets(T,1000,stdin);
    int l,m,i,j,c=0;
    l=strlen(S);
    m=strlen(T);
    if(l==m)
    {
        
         for(i=0;i<=l;i++)
    {
        if(S[i]!=T[i])
        {
            c++;
        }
    }
    }
    else{
        printf(" ");
    }
    printf("%d",c);
   
    

    return 0;
}
