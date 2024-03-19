#include<stdio.h>
#include<math.h>
#include<string.h>

#define N 200000

int main(void)
{
    char S[N], T[N];
    int i, count=0;

    scanf("%s", S);
    scanf("%s", T);

    for(i=0; i<strlen(S); i++) {
        if(S[i] != T[i] ) {
            count++;
        }
    }

    printf("%d\n", count);


    return 0;
}