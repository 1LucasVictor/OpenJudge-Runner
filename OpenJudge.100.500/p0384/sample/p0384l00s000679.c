#include<stdio.h>
#include<ctype.h>
int main(){
    int i;
    char w[1201];
    for( i = 0 ; ; i += 1 ){
        scanf("%c",&w[i]);
        if( w[i] == '\n' ){
            break;
        }
        else{
            if( islower( w[i] ) == 0 ){
                w[i] = tolower( w[i] );
            }
            else if( isupper( w[i] ) == 0 ){
                w[i] = toupper( w[i] );
            }
        }
    }
    for( i = 0 ; ; i += 1 ){
        if( w[i] == '\n' ){
            printf("\n");
            break;
        }
        else{
            printf("%c",w[i]);
        }
    }
    return 0;
}