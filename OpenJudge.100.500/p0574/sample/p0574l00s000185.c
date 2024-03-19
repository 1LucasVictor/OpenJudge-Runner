#include<stdio.h>

int main()
{
    int i,f=0;
    char s,e;

    scanf("%c",&s);
    for(i=0;i<3;i++){
        e=s;
        scanf("%c",&s);
        if(s==e) f=1;
    }

    if(f==1) printf("Bad");
    else printf("Good");

    return 0;
}