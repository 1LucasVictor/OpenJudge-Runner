//https://atcoder.jp/contests/abc172/tasks/abc172_b


#include<stdio.h>     //AA06( 23/ 07/ 20) If u see my code, Have a Good Day! (^_^)
#include<string.h>
#define LENTH 200001

int main()
{
    char S[LENTH], T[LENTH];

    int i, count = 0;

    scanf("%s%s", S, T);

    for(i = 0; i < strlen(S); ++i) {

        if(S[i] != T[i])
            count++;
    }

    printf("%d\n", count);

    return 0;
}
