#include <stdio.h>

int main(void)
{
    char S[200000],T[200000];
    int i,s;
    s = 0;
    scanf("%s%s",S,T);
    for(i = 0;S[i] != '\0';i++){
        if(S[i] != T[i]){
            S[i] = T[i];
            s++;
        }
    }
    printf("%d",s);
	return 0;
}