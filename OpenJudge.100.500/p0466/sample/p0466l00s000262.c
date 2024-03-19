#include<stdio.h>
#include<string.h>
int main()
{
    int flag=0,i,ls;
    char s[10];
    char t[11];
    (void)scanf("%s",s);
    (void)scanf("%s",t);
    ls=strlen(s);
   // lt=strlen(t);
    for(i=0;i<ls;i++)
    {
        if(s[i]==t[i])
        {

        }
        else{
            printf("No");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Yes");
    }
}
