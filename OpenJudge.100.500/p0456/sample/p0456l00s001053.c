#include <stdio.h>

int main()
{
    int counter = 0;
    char S[200000], T[200000];
    scanf("%s", S);
    scanf("%s",T);
    for(int i = 0; i < 20000; i++){
        if(S[i] != T[i]) counter++; 
    }
    printf("%d\n", counter);
    return 0;
}
