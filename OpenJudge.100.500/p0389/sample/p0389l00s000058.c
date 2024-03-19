#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]){
    int m, i, k, s[100];
    char card[201], copy[1000];
    long count;
    
    while(1){
        scanf("%s",card);
        if( strcmp( card , "-" ) == 0 ){
            break;
        }
        count = strlen(card);
        scanf("%d",&m);
        for( k = 0 ; k < m ; k++ ) {
            scanf("%d",&s[k]);
            for( i = 0 ; i < s[k] ; i++ ){
                copy[i] = card[i];
            }
            for( i = 0 ; i < count - s[k] ; i++ ){
                card[i] = card[s[k]+i];
            }
            for( i = 0 ; i < s[k] ; i++ ){
                card[count-s[k]+i] = copy[i];
            }
        }
        printf("%s\n",card);
    }
    
    return 0;
}