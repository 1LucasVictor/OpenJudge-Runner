#include<stdio.h>
int main()
{
    int i,flag=0;
    char s[1000];
    scanf("%s",s);
    for(i=1;i<3;i++)
    {
        if(s[i]!=s[i-1])
        {
            flag=1;
            continue;
        }
    }
       if(flag==1)
       {
           printf("Yes");
       }
       else
        printf("No");


    return 0;
}
