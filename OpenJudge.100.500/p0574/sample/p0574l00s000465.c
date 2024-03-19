#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

long long max(long long A,long long B){
    return A>B?A:B;
}

long long min(long long A,long long B){
    return A<B?A:B;
}

int main(void){
    char s[6];
    scanf("%s",s);
    if(s[0]==s[1] || s[1]==s[2]|| s[2]==s[3]){
        printf("Bad\n");
    } else {
        printf("Good\n");
    }
    return 0;
}