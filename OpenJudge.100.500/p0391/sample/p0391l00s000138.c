#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]){
    int a, b, q, i, j;
    char str[1001], v[1001], p[1001], c[10];
    scanf("%s %d",str,&q);
    for( i = 0 ; i < q ; i++ ){
        scanf("%s %d %d", c, &a, &b);
        if( strcmp(c,"print") == 0 ){
            for( j = a ; j <= b ; j++ ){
                printf("%c",str[j]);
            }
            printf("\n");
        }
        else if( strcmp(c,"reverse") == 0 ){
            strcpy(v,str);
            for( j = a ; j <= b ; j++ ){
                str[j] = v[b-j-a];
            }
        }
        else{
            scanf("%s", p);
            for( j = a ; j <= b ; j++ ){
                str[j] = p[j-a];
            }
        }
    }
    return 0;
}