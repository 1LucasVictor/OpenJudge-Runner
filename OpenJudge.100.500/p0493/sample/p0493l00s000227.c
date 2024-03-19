

#include <stdio.h>

int main()
{
    int x,res=0, rem;
    scanf("%d", &x);
    res += (x/500)*1000;
    x %=500;
    res += 5*(x/5); 
    
    printf("%d", res);
    

    return 0;
}
