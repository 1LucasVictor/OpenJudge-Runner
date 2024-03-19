#include <stdio.h>
#include <string.h>

int main(void)
{
        int i,m,c=0;
        char s[20010],t[20010];
        scanf("%s%s",s,t);
        m=strlen(s);
        for(i=0;i<m;i++)
                if(s[i]==t[i])c++;
        printf("%d\n",m-c);
        return 0;
}
