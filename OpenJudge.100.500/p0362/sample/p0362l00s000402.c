#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a<b)
    {
        if(b>c){printf("No\n");}
        else{printf("Yes\n");}

    }
    else {printf("No\n");}
    return 0;
}

