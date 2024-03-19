#include<stdio.h>
int main()
{
    char a,b,c,d;
    scanf("%c%c%c%c",&a,&b,&c,&d);
    if(a==b && c==d)
        printf("Yes\n");
    else if(a==c && b==d)
        printf("Yes\n");
    else if(a==d && b==c)
        printf("Yes\n");
    else
    printf("No\n");

}
