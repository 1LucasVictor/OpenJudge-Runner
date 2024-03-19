#include<stdio.h>
signed main(){
    char S[200000], T[200000];

    int i, j, count=0;

    scanf("%s %s", S, T);

    for(i=0; S[i] != '\0' ; i++){
        if(S[i] != T[i]){
            count++;
        }
    }

    printf("%d\n", count);

 return 0;
    
}