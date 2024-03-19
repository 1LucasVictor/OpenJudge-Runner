#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

#define max 20001

int main()

{
    int count=0;
    char s[max],t[max];
    scanf("%s %s",s,t);
    int len=strlen(t);
    for(int i=0;i<len;i++)
    {
        if(s[i]!=t[i])
        {
            s[i]=t[i];
            count++;
        }
    }
    printf("%d\n",count);


    return 0;
}


/*
presented by codeRumi
thanks for watching & being here,thank me later... :)
*/
