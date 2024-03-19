#include <stdio.h>
#include <string.h>

int main(){
    char *mark = "SHCD";
    int card[4][13] = { 0 };
    
    int i, j;
    int n, t;
    char c;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; ++i){
        scanf(" %c %d", &c, &t);
        card[strchr(mark, c) - mark][t - 1] = 1;
    }
    
    for(i = 0; i < 4; ++i){
        for(j = 0; j < 13; ++j){
            if(!card[i][j]){
                printf("%c %d\n", mark[i], j + 1);
            }
        }
    }
    
    return 0;
}