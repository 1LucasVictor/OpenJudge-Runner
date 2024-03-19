#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    int b;
    char tmp[16];
    
    while(scanf("%d %d", &a, &b) != EOF){
        sprintf(tmp, "%d", a+b);
        printf("%d\n", strlen(tmp));
    }
    
    return 0;
}