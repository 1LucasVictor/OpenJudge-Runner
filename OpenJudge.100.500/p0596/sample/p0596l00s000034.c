#include <stdio.h>

int main(void)
{

        char S[100000];

        int n,a=0,b=0,i,s;

        scanf("%s",&S);
        n=strlen(S);
        for(i=0;i<n;i++){
                if(S[i]=='0')a++;
                else if(S[i]=='1')b++;
        }
        if(a>b)s=b*2;
        else s=a*2;

        printf("%d\n",s);
        return 0;
}
