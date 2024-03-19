#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int ans;
    scanf("%d",&n);
    
    if ( n % 2 == 0 ){
        ans = n/2;
    } else if ( n % 2 == 1 ){
        ans = n/2 +1;
    }
    
    printf("%d", ans);
    
    return 0;
    
}
