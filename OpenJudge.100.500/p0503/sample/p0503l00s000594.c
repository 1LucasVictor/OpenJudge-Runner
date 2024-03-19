#include <stdio.h>
# include <string.h>

int main() {
    char coisa[200005][11];
    
    int n;
    scanf("%d", &n);
    int a = 0;
    
    for (int i = 0; i < n; ++i)
        scanf("%s", coisa[i]);
        
    for(int i = 0; i < n; ++i){
        int cont = 0;
        for (int j = 0; j < n; ++j){
            if (strcmp(coisa[i], coisa[j]) == 0)
                cont += 1;
        }
        if (cont > 1){
            a = 1;
            break;
            
        }
    }
    if ( a == 1)
        printf("NO\n");
    else
        printf("YES\n");
    
    
    return 0;
}
