#include <stdio.h>

int main(void) {
    char S[4];
    int i ,result;
    result = 0;
    scanf("%s",S);
    if(S[0] == S[1]) result++;
    if(S[0] == S[2]) result++;
    if(S[0] == S[3]) result++;
    if(S[1] == S[2]) result++;
    if(S[1] == S[3]) result++;
    if(S[2] == S[3]) result++;
    
    if(result == 2) printf("Yes\n");
    else printf("No\n");
    
}
