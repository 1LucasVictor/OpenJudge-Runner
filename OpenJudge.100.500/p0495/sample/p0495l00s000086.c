#include<stdio.h>
int main(void)
{
    char s[4];
    int i=0,a=0;
    scanf("%s",s);
    for(i=1;i<3;i++){
        if(s[i-1]!=s[i])
            a++;
    }
    if(a>0)
        printf("Yes\n");
    else 
        printf("No\n");
    return 0;
}