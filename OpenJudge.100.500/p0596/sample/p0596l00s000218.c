#include <stdio.h>
#include <string.h>

int main(){
    char S[100000];
    scanf("%s", S);
    long N = strlen(S);
    long len0=0, len1=0;
    long i;
    for(i = 0; i < N;i++){
        if(S[i] == '0') len0++;
        else{
            len1++;
        }
    }
    if(len0 > len1){
        printf("%ld\n", len1 * 2);
    }else{
        printf("%ld\n", len0 * 2);
    }
    return 0;
}