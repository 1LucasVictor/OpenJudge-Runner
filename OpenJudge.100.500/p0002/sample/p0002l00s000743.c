#include <stdio.h>

void swap(int n, int m){
    int tmp=0;
    tmp = n;
    n = m;
    m = tmp;
}

int main(void){
    int n, a, b, c;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a>b){ swap(a,b); }
        if(b>c){ swap(b,c); }
        
        if(a*a+b*b==c*c) printf("YES\n");
        else printf("NO\n");
        
    }

    return 0;
}

