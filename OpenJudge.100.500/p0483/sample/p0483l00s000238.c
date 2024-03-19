#include<stdio.h>
int solve(int N){
    if(N/100 == 7)
        return 1;
    N %= 100;
    if(N/10 == 7)
        return 1;
    N %= 10;
    if(N == 7)
        return 1;
    else 
        return 0;
}
int main(){
    int N;
    scanf("%d",&N);
    if(solve(N))
        printf("Yes");
    else
        printf("No");
}
