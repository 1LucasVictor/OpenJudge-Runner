#include <stdio.h>

int main(){
    int i, j, k, n, q, S[100], T[100];
    k = 0;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &S[i]);
    
    scanf("%d", &q);
    for(i = 0; i < q; i++) scanf("%d", &T[i]);

    for(i = 0; i < n; i++){
        for(j = 0; j < q; j++){
            if(S[i] == T[j]) k++;
        }
    }
    
    printf("%d\n", k);
    
    return 0;
    
}