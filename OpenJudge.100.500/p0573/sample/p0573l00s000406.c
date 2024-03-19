#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
char a,b,c,d;
    scanf("%c%c%c%c",&a,&b,&c,&d);
    
    if(a==b && b==c && c==d && a==d)
        printf("No");
        
    else if(a==c && b==d)
        printf("Yes");
        
    else if(a==d && b==c)
        printf("Yes");
        
    else if(a==b && c==d)
    printf("Yes");
    
     else
        printf("No");
    return 0;
}