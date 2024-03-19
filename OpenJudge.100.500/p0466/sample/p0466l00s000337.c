#include<stdio.h>
#include<string.h>
int main()
{
    char s1[12],s2[12];
    int i,flag=0;
    scanf("%s",&s1);
    scanf("%s",&s2);
    int l=strlen(s1);
   // printf("%d\n",l);
    for(i=0; i<strlen(s2)-1; i++)
    {
        if(s1[i]==s2[i])
            flag++;
    }
    //printf("%d\n",flag);
    if(flag==l)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
