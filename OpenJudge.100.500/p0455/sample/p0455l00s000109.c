#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a>0 && a<11){
            int b= a + (a*a)+(a*a*a);

            printf("%d",b);

    }
        else printf("Input wasn't a desired one");
    return 0;
}
