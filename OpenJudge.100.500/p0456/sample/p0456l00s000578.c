#include <stdio.h>
#include<math.h>
int count=0;
int main()
{
    char s[200005],t[200005];
    scanf("%s",s);
    scanf("%s",t);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=t[i])
        count++;
    }
    printf("%d\n",count);
}
