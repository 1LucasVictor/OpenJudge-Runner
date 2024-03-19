#include <stdio.h>

int main(){
	int i, max;
    int n;
    int a, b, c;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);
        
        max = a;
        if (max < b) max = b;
        if (max < c) max = c;
        
        if (max*max == a*a + b*b + c*c - max*max) printf("YES\n");
        else                                      printf("NO\n");
    }
    
    return 0;
}