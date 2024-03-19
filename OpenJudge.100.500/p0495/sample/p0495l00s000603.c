#include<stdio.h>
int main()
{
    char s[10];
    int i,c1=0,c2=0;

    scanf("%s",s);

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='A')
            c1++;

        else if(s[i]=='B')
            c2++;
    }


    if((c1==2 && c2==1)||(c1==1 && c2==2))
        printf("Yes\n");

    else
        printf("No\n");
}
