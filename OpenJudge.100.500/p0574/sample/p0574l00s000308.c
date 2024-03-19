#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define LL long long
#define INF 1<<31-1
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))

int main()
{
    int S[4];
    int s;
    int num = 1000;
        
    scanf("%d", &s);
    for(int i = 0; i < 4; i++){
        S[i] = s / num;
        s    = s - S[i] * num;
        num = num / 10;
    }
    
    for(int i = 1; i < 4; i++){
        if(S[i] == S[i-1]) {printf("Bad\n"); return 0;}
    }
    printf("Good\n");
    
    return 0;
}
