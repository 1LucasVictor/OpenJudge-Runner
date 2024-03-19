#include<stdio.h>
#include<string.h>
int main()
{
    char s[10],t[20];
    scanf("%s",s);
    scanf("%s",t);
    int i=0;
    int k=0;
    while(s[i]!='\0')
    {
        if(s[i]==t[i])
        {
            k++;
        }
        i++;
    }
    if(k==strlen(s)&&strlen(t)==(strlen(s)+1))
    {
        printf("Yes");
    }else{
    printf("No");
    }
}
