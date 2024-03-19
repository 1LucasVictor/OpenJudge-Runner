#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[4];
    char A[4]={'A','A','A'};
    char B[4]={'B','B','B'};

    scanf("%s",S);

    if((strcmp(S,B)==0) || (strcmp(S,A)==0)){
        printf("No\n");
    } else {
        printf("Yes\n");
    }

    return 0;
}