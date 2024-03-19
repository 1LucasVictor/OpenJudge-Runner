#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]){
    int a, b, q, i, j;
    char str[1001], p[1001], c[101];
    scanf("%s %d",str,&q);
    for( i = 0 ; i < q ; i++ ){
        scanf("%s %d %d", c, &a, &b);
        if( strcmp(c,"print") == 0 ){
            for( j = a ; j <= b ; j++ ){
                printf("%c",str[j]);
            }
            printf("\n");
            continue;
        }
        else if( strcmp(c,"reverse") == 0 ){
            strcpy(p,str);
            for( j = a ; j <= b ; j++ ){
                str[j] = p[b-j-a];
            }
            continue;
        }
        else{
            scanf("%s", p);
            for( j = a ; j <= b ; j++ ){
                str[j] = p[j-a];
            }
            continue;
        }
    }
    return 0;
}