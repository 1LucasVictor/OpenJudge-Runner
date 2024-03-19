#include <stdio.h>

int main(){
    long long   h, n, a;
    scanf("%lld %lld", &h, &n);

    for(int i=0; i<n; i++){
        scanf("%lld", &a);
        h -= a;
        if( h <= 0 ){ break; }
    }
    if( h > 0 ){ printf("No\n");  }
    else       { printf("Yes\n"); }

    return 0;
}