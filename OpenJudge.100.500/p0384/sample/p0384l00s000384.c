#include<stdio.h>
int main(void){
    char C;
    while(scanf("%c",&C)==1){
        if('A'<=C && C<='Z'){
            printf("%c",C+32);
        }
        else if('a'<=C && C<='z'){
            printf("%c",C-32);
        }
        else{
            printf("%c",C);
        }
    }
    return 0;
}
