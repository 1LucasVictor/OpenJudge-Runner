#include<stdio.h>

int main()
{
    int a,b,c,rem;
    
    scanf("%d%d",&a,&b);
    
    if(a<b) {
        c = a;
        a = b;
        b = c;
    }
    
    rem = a % b;
    while(rem != 0) {
        a = b;
        b = rem;
        rem = a % b;
    }
    
    printf("%d\n",b);
    
    return 0;
}

