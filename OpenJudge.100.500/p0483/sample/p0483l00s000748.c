#include <stdio.h>

int main(){
    char* N;
    scanf("%s", N);
    int flag =0;

    if (N[0] == '7' || N[1] == '7' || N[2] == '7' )
        printf("Yes");
    else
        printf("No");
        
    return 0;
}